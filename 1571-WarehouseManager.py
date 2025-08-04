import pandas as pd

def warehouse_manager(warehouse: pd.DataFrame, products: pd.DataFrame) -> pd.DataFrame:
    products["unitvol"] = products["Width"] * products["Length"] * products["Height"]
    products = products[["product_id", "unitvol"]]
    df = pd.merge(warehouse, products, on="product_id", how="left")
    df["volume"] = df["units"] * df["unitvol"]
    df = pd.DataFrame(df.groupby("name")['volume'].sum()).reset_index()
    df.columns=["warehouse_name", "volume"]
    print(df)
    return df
