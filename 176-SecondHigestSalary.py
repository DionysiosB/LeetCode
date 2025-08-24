import pandas as pd

def second_highest_salary(employee: pd.DataFrame) -> pd.DataFrame:
    df = employee["salary"].drop_duplicates()
    df.sort_values(ascending=True, inplace=True)
    sh = df.iloc[-2] if df.shape[0] > 1 else None
    return pd.DataFrame({"SecondHighestSalary": [sh]})
