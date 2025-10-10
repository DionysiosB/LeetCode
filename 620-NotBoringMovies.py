import pandas as pd

def not_boring_movies(df: pd.DataFrame) -> pd.DataFrame:
    df = df[(df["id"] % 2 == 1) & (df["description"] != "boring")]
    df.sort_values(by="rating", ascending=False, inplace=True)
    return df
