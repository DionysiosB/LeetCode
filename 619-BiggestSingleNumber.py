import pandas as pd

def biggest_single_number(df: pd.DataFrame) -> pd.DataFrame:
   du = df.groupby("num").filter(lambda x: len(x) == 1)
   mx = du['num'].max()
   return pd.DataFrame({"num": [mx]})
