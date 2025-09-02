import pandas as pd

def food_delivery(delivery: pd.DataFrame) -> pd.DataFrame:
   total = delivery.shape[0]
   immediate = delivery[delivery["order_date"] == delivery["customer_pref_delivery_date"]].shape[0]
   return pd.DataFrame({"immediate_percentage": [round(100 * immediate / total, 2)]})
