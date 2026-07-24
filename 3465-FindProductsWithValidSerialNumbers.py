import pandas as pd

def find_valid_serial_products(products: pd.DataFrame) -> pd.DataFrame:
    pattern = r"SN\d{4}-\d{4}\b"
    products["sn"] = products["description"].apply(lambda x: bool(re.search(pattern, x)))
    products = products[products["sn"] == True]
    products.drop(columns=["sn"], inplace = True)
    products.sort_values(by=["product_id"], ascending=True)
    return products
