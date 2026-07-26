import pandas as pd

def calculate_final_prices(products: pd.DataFrame, discounts: pd.DataFrame) -> pd.DataFrame:

    df = pd.merge(products, discounts, on=["category"], how="left")
    df.fillna(value=0, inplace=True)
    df["final_price"] = df["price"] * (100 - df["discount"]) / 100
    df = df[["product_id", "final_price", "category"]]
    df.sort_values(by=["product_id"], ascending=True, inplace=True)
    return df
