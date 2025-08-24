import pandas as pd

def nth_highest_salary(employee: pd.DataFrame, N: int) -> pd.DataFrame:
    employee.drop_duplicates(subset=["salary"], inplace=True)
    employee.reset_index(drop=True)
    employee.sort_values(by="salary", ascending=False, inplace=True)
    ns =  employee.iloc[N - 1]["salary"] if (N > 0 and employee.shape[0] >= N) else None
    return pd.DataFrame({f'getNthHighestSalary({N})': [ns]})
