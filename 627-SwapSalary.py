import pandas as pd

def swap_salary(salary: pd.DataFrame) -> pd.DataFrame:
    salary["sex"] = salary["sex"].apply(lambda x: 'f' if x == 'm' else 'm')
    return salary
