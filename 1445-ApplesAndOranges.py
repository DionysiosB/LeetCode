import pandas as pd

def apples_oranges(sales: pd.DataFrame) -> pd.DataFrame:
    dfa = sales[sales["fruit"] == "apples"].drop(columns=["fruit"])
    dfa.columns = ["sale_date", "sold_num_apples"]
    dfb = sales[sales["fruit"] == "oranges"].drop(columns=["fruit"])
    dfb.columns = ["sale_date", "sold_num_oranges"]
    df = pd.merge(dfa, dfb, on = "sale_date", how = "left")
    df["diff"] = df["sold_num_apples"] - df["sold_num_oranges"]
    df.drop(columns=["sold_num_apples", "sold_num_oranges"],inplace=True)
    return df
