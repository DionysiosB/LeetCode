import pandas as pd

def department_highest_salary(employee: pd.DataFrame, department: pd.DataFrame) -> pd.DataFrame:
    df = pd.merge(employee, department, how="left", left_on="departmentId", right_on="id", suffixes=["_a", "_b"])
    df = df.groupby("departmentId").apply(lambda x: x[x['salary'] == x['salary'].max()]).reset_index(drop=True)
    df.rename(columns={"name_b": "Department", "name_a":"Employee", "salary": "Salary"}, inplace=True)
    return df[["Department", "Employee", "Salary"]]
