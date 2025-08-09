import pandas as pd

def convert_date_format(days: pd.DataFrame) -> pd.DataFrame:
   days["day"] = days["day"].dt.strftime("%A, %B %-d, %Y")
   return days
