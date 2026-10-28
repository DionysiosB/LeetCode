import pandas as pd

def weather_type(countries: pd.DataFrame, weather: pd.DataFrame) -> pd.DataFrame:

    df = pd.merge(countries, weather, how="inner", on="country_id")
    df = df[(df['day'].dt.year == 2019) & (df['day'].dt.month == 11)]
    df = df[["country_name", "weather_state"]]
    df = df.groupby(["country_name"]).mean().reset_index()

    def getweathertype(row):
        if row['weather_state'] <= 15 : return "Cold"
        elif row['weather_state'] >= 25 : return "Hot"
        else: return "Warm"


    df['weather_type'] = df.apply(getweathertype, axis=1)
    df = df[["country_name", "weather_type"]]

    return df


