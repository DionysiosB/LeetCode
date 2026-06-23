import pandas as pd
from functools import reduce

def analyze_permissions(user_permissions: pd.DataFrame) -> pd.DataFrame:

    permlist = list(user_permissions["permissions"])
    cp = reduce(lambda x, y: x & y, permlist)
    ap = reduce(lambda x, y: x | y, permlist)
    return pd.DataFrame({'common_perms': [cp], 'any_perms': [ap]})
