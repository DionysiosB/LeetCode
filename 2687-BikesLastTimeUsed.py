import pandas as pd

def last_used_time(bikes: pd.DataFrame) -> pd.DataFrame:
    bikes = bikes.sort_values(by=["bike_number", "end_time"]).drop_duplicates(["bike_number"], keep = "last")
    bikes = bikes.sort_values(by="end_time", ascending=False)[["bike_number", "end_time"]]
    return bikes
