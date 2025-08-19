import pandas as pd

def get_total_distance(users: pd.DataFrame, rides: pd.DataFrame) -> pd.DataFrame:
   df = pd.merge(users, rides, on="user_id", how="left")
   df = df.groupby(["user_id", "name"])["distance"].sum().reset_index()
   df.rename(columns={"distance": "traveled distance"}, inplace=True)
   return df
