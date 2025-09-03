import pandas as pd

def largest_orders(orders: pd.DataFrame) -> pd.DataFrame:
    if(orders.shape[0] == 0):return pd.DataFrame({"customer_number":[]})
    df = orders.groupby(["customer_number"]).size().reset_index(name="count")
    df = df[df["count"] == max(df["count"])]
    return df[["customer_number"]]
