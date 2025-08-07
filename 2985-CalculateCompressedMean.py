import pandas as pd

def compressed_mean(orders: pd.DataFrame) -> pd.DataFrame:
    orders["mult"] = orders["item_count"] * orders["order_occurrences"]
    avg = sum(orders["item_count"] * orders["order_occurrences"]) / sum(orders["order_occurrences"])
    avg = [round(100 * avg) / 100]
    return pd.DataFrame({"average_items_per_order" : avg})

