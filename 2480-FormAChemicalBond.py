import pandas as pd

def form_bond(df: pd.DataFrame) -> pd.DataFrame:
    metals = set(df[df["type"] == "Metal"]["symbol"])
    nonmetals = set(df[df["type"] == "Nonmetal"]["symbol"])
    pairs = [[x, y] for x in metals for y in nonmetals]
    return pd.DataFrame(pairs, columns=["metal", "nonmetal"])
