import pandas as pd

def sum_daily_odd_even(transactions: pd.DataFrame) -> pd.DataFrame:

    df = transactions
    dfeven = df[df["amount"] % 2 == 0].groupby("transaction_date").sum().reset_index()
    dfeven = dfeven[["transaction_date", "amount"]]
    dfeven.rename(columns={"amount":"even_sum"}, inplace=True)

    dfodd = df[df["amount"] % 2 == 1].groupby("transaction_date").sum().reset_index()
    dfodd = dfodd[["transaction_date", "amount"]]
    dfodd.rename(columns={"amount":"odd_sum"}, inplace=True)

    df = pd.merge(dfodd, dfeven, on="transaction_date", how="outer").fillna(0)
    return df
