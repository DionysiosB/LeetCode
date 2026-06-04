import pandas as pd
import numpy as np

def queries_stats(queries: pd.DataFrame) -> pd.DataFrame:

    queries = queries.dropna()
    queries["quality"] = queries["rating"] / queries["position"] + 1e-6
    queries["poor_query_percentage"] = queries["rating"].apply(lambda x: 100 if x < 3 else 0)
    df = queries.groupby("query_name")[["quality", "poor_query_percentage"]].mean().round(2).reset_index()
    return df

