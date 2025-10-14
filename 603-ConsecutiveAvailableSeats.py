import pandas as pd

def consecutive_available_seats(cinema: pd.DataFrame) -> pd.DataFrame:
    df = cinema[cinema["free"] == 1]
    df = df.sort_values(by="seat_id", ignore_index=True)

    df["cnt"] = df.groupby(df["seat_id"] - df.index)["seat_id"].transform("count")
    return df[df["cnt"] > 1][["seat_id"]]
