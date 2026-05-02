import pandas as pd

def reformat_table(department: pd.DataFrame) -> pd.DataFrame:
    all_months = ['Jan', 'Feb', 'Mar', 'Apr', 'May', 'Jun', 'Jul', 'Aug', 'Sep', 'Oct', 'Nov', 'Dec']
    df = department.pivot_table(index='id', columns='month', values='revenue', aggfunc='sum')
    df = df.reindex(columns=all_months)
    df.columns = [f"{month}_Revenue" for month in df.columns]
    df.reset_index(inplace=True)
    return df
