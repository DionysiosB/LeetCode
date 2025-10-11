import pandas as pd

def duplicate_emails(person: pd.DataFrame) -> pd.DataFrame:
    df = person.groupby("email").size().reset_index(name="freq")
    df = df[df["freq"] > 1]
    df = df[["email"]]
    df.rename(columns={"email":"Email"},inplace=True)
    return df
