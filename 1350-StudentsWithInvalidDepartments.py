import pandas as pd

def find_students(departments: pd.DataFrame, students: pd.DataFrame) -> pd.DataFrame:
    departments.rename(columns={"id": "department_id", "name": "dept_name"}, inplace = True)
    df = pd.merge(students, departments, on = "department_id", how = "left")
    df.fillna({"dept_name": "NA"}, inplace=True)
    df = df[df["dept_name"] == "NA"]
    df.drop(columns=["department_id", "dept_name"], inplace=True)
    return df

