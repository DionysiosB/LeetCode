import pandas as pd

def game_analysis(activity: pd.DataFrame) -> pd.DataFrame:

    df = activity.sort_values(by = "event_date")
    df = df.groupby(['player_id']).first(['player_id', 'device_id']).reset_index()
    df.drop(columns=['games_played'], inplace=True)
    return df
