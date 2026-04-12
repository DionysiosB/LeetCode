import pandas as pd

def account_summary(users: pd.DataFrame, transactions: pd.DataFrame) -> pd.DataFrame:

    tm = transactions.groupby('account')["amount"].sum().reset_index()
    tm = tm[tm["amount"] > 10000]
    res = pd.merge(users, tm, on=["account"], how="inner")
    res = res[["name", "amount"]]
    res.rename(columns={'name': 'NAME', 'amount': 'BALANCE'}, inplace=True)
    return res

