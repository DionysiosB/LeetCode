import pandas as pd

def find_customers(visits: pd.DataFrame, transactions: pd.DataFrame) -> pd.DataFrame:

    df = pd.merge(visits, transactions, on="visit_id", how="left")
    df = df[df["transaction_id"].isnull()]
    df = df.groupby("customer_id")["visit_id"].count().reset_index()
    df.rename(columns={"visit_id": "count_no_trans"}, inplace=True)
    return df

