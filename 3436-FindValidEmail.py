import pandas as pd

def find_valid_emails(users: pd.DataFrame) -> pd.DataFrame:
    users['valid'] = users['email'].str.match('^[a-zA-Z0-9_]+@[a-zA-Z]+\.com$')
    users = users[users['valid'] == True]
    users = users[['user_id', 'email']]
    users.sort_values(by=['user_id'], ascending=True, inplace=True)
    return users
