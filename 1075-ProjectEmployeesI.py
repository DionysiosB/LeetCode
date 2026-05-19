import pandas as pd

def project_employees_i(project: pd.DataFrame, employee: pd.DataFrame) -> pd.DataFrame:

    df = pd.merge(project, employee, on="employee_id", how="left")
    df = df.groupby("project_id")["experience_years"].mean().round(2).reset_index()
    df.rename(columns={"experience_years": "average_years"}, inplace=True)
    return df[["project_id", "average_years"]]
