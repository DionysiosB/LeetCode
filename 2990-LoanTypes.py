import pandas as pd

def loan_types(ldf: pd.DataFrame) -> pd.DataFrame:
    ldf = ldf[ (ldf["loan_type"] == "Mortgage") | (ldf["loan_type"] == "Refinance")]
    ldf = ldf.groupby("user_id")["loan_type"].nunique().reset_index()
    ldf = ldf[ldf["loan_type"] >= 2]
    ldf.sort_values(by="user_id", ascending=True, inplace=True)
    return ldf[["user_id"]]
