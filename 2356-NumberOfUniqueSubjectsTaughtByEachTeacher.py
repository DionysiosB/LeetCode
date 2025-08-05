import pandas as pd

def count_unique_subjects(teacher: pd.DataFrame) -> pd.DataFrame:
    df = pd.DataFrame(teacher[["teacher_id", "subject_id"]].groupby(["teacher_id"]).nunique().reset_index())
    df.columns = ["teacher_id", "cnt"]
    return df
