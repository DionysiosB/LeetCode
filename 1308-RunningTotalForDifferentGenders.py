import pandas as pd

def running_total(scores: pd.DataFrame) -> pd.DataFrame:
    df = scores.sort_values(["gender", "day"])
    df["total"] = df.groupby(["gender"])["score_points"].transform("cumsum")
    return df[["gender", "day", "total"]]
