import pandas as pd

def count_employees(employees: pd.DataFrame) -> pd.DataFrame:

    df = employees.dropna();
    df = df.groupby("reports_to").agg({"employee_id": "count", "age": "mean"}).reset_index()
    df.rename(columns={"reports_to": "employee_id", "employee_id":"reports_count", "age": "average_age"}, inplace=True)
    df = pd.merge(df, employees[["employee_id", "name"]], on="employee_id", how="left")
    df["average_age"] = round(df["average_age"] + 1e-6)
    return df[["employee_id", "name", "reports_count", "average_age"]]

