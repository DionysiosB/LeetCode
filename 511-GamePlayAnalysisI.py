import pandas as pd

def game_analysis(activity: pd.DataFrame) -> pd.DataFrame:
   df = activity.groupby("player_id")["event_date"].min().reset_index()
   df.columns=["player_id", "first_login"]
   return df
