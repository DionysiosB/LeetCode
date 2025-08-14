import pandas as pd

def pivotTable(weather: pd.DataFrame) -> pd.DataFrame:
    w = weather.pivot(
        index = "month",
        columns = "city",
        values = "temperature"
    )

    return w
