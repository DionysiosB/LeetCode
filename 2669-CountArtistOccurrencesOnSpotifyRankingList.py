import pandas as pd

def count_occurrences(sdf: pd.DataFrame) -> pd.DataFrame:
    df = sdf.groupby(["artist"]).size().reset_index()
    df.columns=["artist", "occurrences"]
    df.sort_values(by=["occurrences", "artist"], ascending=[False, True], inplace=True)
    return df


