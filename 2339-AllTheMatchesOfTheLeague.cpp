import pandas as pd

def find_all_matches(teams: pd.DataFrame) -> pd.DataFrame:
    tl = list(teams["team_name"])
    pairs = [[x, y] for x in tl for y in tl if x != y]
    home = [x[0] for x in pairs]
    away = [x[1] for x in pairs]
    df = pd.DataFrame({"home_team": home, "away_team": away})
    return df
