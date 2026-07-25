import pandas as pd

def calculate_team_standings(team_stats: pd.DataFrame) -> pd.DataFrame:

    team_stats['points'] = 3 * team_stats['wins'] + team_stats['draws']
    team_stats.drop(columns=['matches_played', 'wins', 'draws', 'losses'], inplace=True)
    team_stats.sort_values(by=['points', 'team_name'], ascending=[False, True], inplace=True)
    team_stats['position'] = team_stats['points'].rank(method="min", ascending=False)
    return team_stats

