import pandas as pd

def count_salary_categories(accounts: pd.DataFrame) -> pd.DataFrame:
    numlow = len(accounts[accounts["income"] < 20000])
    nummid = len(accounts[ (20000 <= accounts["income"]) & (accounts["income"] <= 50000)] )
    numupp = len(accounts[accounts["income"] > 50000])
    return pd.DataFrame({"category": ["Low Salary", "Average Salary", "High Salary"], "accounts_count": [numlow, nummid, numupp]}
