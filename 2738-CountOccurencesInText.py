import pandas as pd

def count_occurrences(files: pd.DataFrame) -> pd.DataFrame:
    bullcnt = files["content"].str.contains(r'\sbull\s').sum()
    bearcnt = files["content"].str.contains(r'\sbear\s').sum()
    return pd.DataFrame({'word': ["bull", "bear"], "count": [bullcnt, bearcnt]})
