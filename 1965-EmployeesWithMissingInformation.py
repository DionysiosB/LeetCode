import pandas as pd

def find_employees(employees: pd.DataFrame, salaries: pd.DataFrame) -> pd.DataFrame:

    df = pd.merge(employees, salaries, on="employee_id", how="outer")
    df = df[df.isnull().any(axis=1)]
    return df[["employee_id"]]
