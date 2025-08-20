import pandas as pd

def salaries_difference(salaries: pd.DataFrame) -> pd.DataFrame:
    a = max(salaries[salaries["department"] == "Engineering"]["salary"])
    b = max(salaries[salaries["department"] == "Marketing"]["salary"])
    return pd.DataFrame({"salary_difference": [abs(a - b)]})
