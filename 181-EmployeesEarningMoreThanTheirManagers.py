import pandas as pd

def find_employees(employee: pd.DataFrame) -> pd.DataFrame:
    df = pd.merge(employee, employee, left_on="managerId", right_on="id", how="inner", suffixes = ["_e", "_m"])
    df = df[df["salary_e"] > df["salary_m"]]
    df.rename(columns={"name_e":"Employee"}, inplace=True)
    return df[["Employee"]]
