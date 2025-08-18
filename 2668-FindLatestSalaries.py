import pandas as pd

def find_latest_salaries(salary: pd.DataFrame) -> pd.DataFrame:
   return salary.sort_values(by=["emp_id", "salary"]).drop_duplicates("emp_id", keep="last")
