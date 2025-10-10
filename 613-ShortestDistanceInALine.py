import pandas as pd

def shortest_distance(point: pd.DataFrame) -> pd.DataFrame:

    point.sort_values(by="x", inplace=True)
    return pd.DataFrame({"shortest": [point["x"].diff().min()]})
