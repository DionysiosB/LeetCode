import pandas as pd

def find_expensive_cities(ldf: pd.DataFrame) -> pd.DataFrame:
   navg = ldf["price"].mean()
   df = ldf.groupby(["city"])["price"].mean().reset_index()
   df = df[df["price"] > navg]
   df.sort_values(by="city", ascending=True, inplace=True)
   return df[["city"]]
