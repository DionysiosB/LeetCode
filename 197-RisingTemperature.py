import pandas as pd

def rising_temperature(weather: pd.DataFrame) -> pd.DataFrame:
    weather["recordDate"] = pd.to_datetime(weather["recordDate"])
    weather.sort_values(by=["recordDate"], inplace=True)
    weather["prevtemp"] = weather['temperature'].shift(1)
    weather["prevdate"] = weather['recordDate'].shift(1)
    result = weather[
        (weather["temperature"] > weather["prevtemp"]) &
        (weather["recordDate"] == pd.Timedelta(days=1) + weather["prevdate"])
    ][["id"]]
    result.rename(columns={"id": "Id"}, inplace=True)
    return result

