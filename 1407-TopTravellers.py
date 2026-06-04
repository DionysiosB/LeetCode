import pandas as pd

def top_travellers(users: pd.DataFrame, rides: pd.DataFrame) -> pd.DataFrame:
    rides = rides.groupby("user_id")["distance"].sum().reset_index()
    rides = rides.rename(columns={"distance": "travelled_distance"})
    users = users.rename(columns={"id": "user_id"})
    df = pd.merge(users, rides, on="user_id", how="left")
    df = df.fillna(0)
    df = df[["name", "travelled_distance"]]
    df = df.sort_values(by=["travelled_distance", "name"], ascending=[False, True])
    return df

