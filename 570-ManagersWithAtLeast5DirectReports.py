import pandas as pd

def find_managers(employee: pd.DataFrame) -> pd.DataFrame:
    mrc = employee.groupby("managerId").size().reset_index(name='directReports')
    result = mrc[mrc["directReports"] >= 5]
    result = pd.merge(result, employee[["id", "name"]], left_on="managerId", right_on="id", how="inner")
    result = result[["name"]]
    return result
