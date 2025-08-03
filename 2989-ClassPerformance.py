import pandas as pd

def class_performance(scores: pd.DataFrame) -> pd.DataFrame:
    scores["total"] = scores["assignment1"] + scores["assignment2"] + scores["assignment3"]
    mxdiff = scores["total"].max() - scores["total"].min()
    return pd.DataFrame({"difference_in_score": [mxdiff]})

