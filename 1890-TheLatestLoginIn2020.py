import pandas as pd

def latest_login(logins: pd.DataFrame) -> pd.DataFrame:

    logins['ts'] = pd.to_datetime(logins['time_stamp'])
    df = logins[logins['ts'].dt.year == 2020]
    df = df.groupby('user_id')['ts'].max().reset_index()
    df.rename(columns={"ts":"last_stamp"}, inplace=True)
    return df
