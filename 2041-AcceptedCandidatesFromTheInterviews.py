import pandas as pd

def accepted_candidates(candidates: pd.DataFrame, rounds: pd.DataFrame) -> pd.DataFrame:
    candidates= candidates[candidates["years_of_exp"] >= 2]
    rounds = rounds.groupby("interview_id")["score"].sum().reset_index(name="total_score")
    rounds = rounds[rounds["total_score"] > 15]
    result = pd.merge(candidates, rounds, how="inner", on="interview_id")
    return result[["candidate_id"]]
