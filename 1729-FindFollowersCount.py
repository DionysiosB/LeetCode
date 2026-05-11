import pandas as pd

def count_followers(followers: pd.DataFrame) -> pd.DataFrame:

    df = followers.groupby('user_id', as_index=False)['follower_id'].count()
    df.rename(columns={"follower_id": "followers_count"}, inplace=True)
    df = df.sort_values(by="user_id", ascending=True)
    return df

