import pandas as pd

def users_percentage(users: pd.DataFrame, register: pd.DataFrame) -> pd.DataFrame:
    numusers = users.shape[0]
    df = register.groupby("contest_id")["user_id"].count().reset_index()
    df["percentage"] = 100 * df["user_id"] / numusers
    df["percentage"] = df["percentage"].round(2)
    df.sort_values(by=["percentage", "contest_id"], ascending=[False, True], inplace=True)
    return df[["contest_id", "percentage"]]

