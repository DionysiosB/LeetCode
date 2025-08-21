import pandas as pd

def calculate_special_bonus(employees: pd.DataFrame) -> pd.DataFrame:
    def bonus(row):
        return row["salary"] if (row["employee_id"] % 2) and (row["name"][0] != 'M') else 0
    employees["bonus"] = employees.apply(bonus, axis=1)
    return employees[["employee_id", "bonus"]].sort_values(["employee_id"])

