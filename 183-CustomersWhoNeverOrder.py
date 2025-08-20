import pandas as pd

def find_customers(customers: pd.DataFrame, orders: pd.DataFrame) -> pd.DataFrame:
    customers.rename(columns={"id": "customerId"}, inplace=True)
    df = pd.merge(customers, orders, on="customerId", how="left")
    df = df[df["id"].isnull()]
    df.rename(columns={"name": "Customers"}, inplace=True)
    return df[["Customers"]]
