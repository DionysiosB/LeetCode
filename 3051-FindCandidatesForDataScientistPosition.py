import pandas as pd

def find_candidates(cdf: pd.DataFrame) -> pd.DataFrame:
    def score(row):
        x = row["skill"]
        return (x == 'Python') + (x == 'Tableau') + (x == 'PostgreSQL')
    cdf["score"] = cdf.apply(score, axis=1)
    cdf = cdf.groupby("candidate_id")["score"].sum().reset_index()
    cdf = cdf[cdf["score"] >= 3]
    cdf.sort_values(by="candidate_id", ascending=True, inplace=True)
    return cdf[["candidate_id"]]
