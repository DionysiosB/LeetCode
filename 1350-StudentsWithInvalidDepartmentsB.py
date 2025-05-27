import pandas as pd

def find_students(departments: pd.DataFrame, students: pd.DataFrame) -> pd.DataFrame:
    return students[~students["department_id"].isin(departments["id"])].drop(columns = ["department_id"])
