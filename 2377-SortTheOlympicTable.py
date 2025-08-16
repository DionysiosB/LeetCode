import pandas as pd

def sort_table(df: pd.DataFrame) -> pd.DataFrame:
    return df.sort_values(by=["gold_medals", "silver_medals", "bronze_medals", "country"], ascending=[False, False, False, True])
