import pandas as pd

def low_quality_problems(problems: pd.DataFrame) -> pd.DataFrame:
   problems["percentage"] = problems["likes"] / (problems["likes"] + problems["dislikes"])
   problems = problems[problems["percentage"] < 0.6]
   return problems[["problem_id"]].sort_values(by=["problem_id"], ascending=True)
