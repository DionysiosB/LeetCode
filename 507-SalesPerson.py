import pandas as pd

def sales_person(sales_person: pd.DataFrame, company: pd.DataFrame, orders: pd.DataFrame) -> pd.DataFrame:
   dfs =  pd.merge(left=orders, right=company[company['name'] == 'RED'], on='com_id', how='inner')['sales_id'].unique()
   return sales_person[~sales_person["sales_id"].isin(dfs)][["name"]]
