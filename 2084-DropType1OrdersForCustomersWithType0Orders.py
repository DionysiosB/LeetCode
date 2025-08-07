import pandas as pd

def drop_specific_orders(orders: pd.DataFrame) -> pd.DataFrame:
   z = set(orders[orders["order_type"] == 0]["customer_id"])
   orders = orders[(~orders["customer_id"].isin(z)) | (orders["order_type"] == 0)]
   return orders
