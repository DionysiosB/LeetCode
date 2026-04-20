import pandas as pd

def tree_node(tree: pd.DataFrame) -> pd.DataFrame:

    tree["type"] = "Inner"
    all_parents= tree["p_id"].dropna().unique()
    tree.loc[~tree['id'].isin(all_parents) ,"type"] = 'Leaf'
    tree.loc[tree["p_id"].isna(),'type'] = 'Root'
    return tree[['id', 'type']]
