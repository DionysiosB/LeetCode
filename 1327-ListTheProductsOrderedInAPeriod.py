import pandas as pd

def list_products(products: pd.DataFrame, orders: pd.DataFrame) -> pd.DataFrame:
    orders['dt'] = pd.to_datetime(orders['order_date'])
    orders = orders[(orders['dt'].dt.year == 2020) & (orders['dt'].dt.month == 2)]
    orders = orders.groupby('product_id')['unit'].sum().reset_index()
    orders = orders[orders["unit"] >= 100]
    df = pd.merge(orders, products, on="product_id", how="left")
    return df[["product_name", "unit"]]
