import pandas as pd

def find_missing_ids(customers: pd.DataFrame) -> pd.DataFrame:
    mxc = customers['customer_id'].max()
    allids = pd.DataFrame({'ids': range(1, mxc)})
    df = pd.merge(allids, customers, how = 'left', left_on='ids', right_on='customer_id')
    df = df[df['customer_name'].isna()]
    df.drop(columns=['customer_name', 'customer_id'], inplace=True)
    return df
