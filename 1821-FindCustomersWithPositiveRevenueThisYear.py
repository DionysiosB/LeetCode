import pandas as pd

def find_customers(customers: pd.DataFrame) -> pd.DataFrame:
    df = customers[(customers["year"] == 2021) & (customers["revenue"] > 0)]
    return df.drop(columns=["year", "revenue"])
