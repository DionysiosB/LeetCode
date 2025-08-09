import pandas as pd

def capital_gainloss(stocks: pd.DataFrame) -> pd.DataFrame:
    def updsign(row):
        if(row["operation"] == "Buy"): row["price"] = -row["price"]
        return row

    stocks = stocks.agg(updsign, axis = 1)
    return stocks.groupby(["stock_name"])["price"].sum().reset_index().rename(columns={"price":"capital_gain_loss"})
