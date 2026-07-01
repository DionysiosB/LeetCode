import pandas as pd

def find_cities(cities: pd.DataFrame) -> pd.DataFrame:

    df = cities.groupby('state')['city'].apply(lambda x: ', '.join(sorted(x))).reset_index()
    df = df.rename(columns={'city': 'cities'})
    df = df.sort_values(by='state').reset_index(drop=True)
    return df
