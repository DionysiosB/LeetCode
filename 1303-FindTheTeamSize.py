import pandas as pd

def team_size(employee: pd.DataFrame) -> pd.DataFrame:

    sizes = pd.DataFrame(employee["team_id"].value_counts())
    sizes.rename(columns={"count" : "team_size"}, inplace=True)
    df = pd.merge(employee, sizes, on="team_id", how = "left")
    df.drop(columns=["team_id"], inplace=True)

    return df
