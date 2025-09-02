import pandas as pd

def ads_performance(ads: pd.DataFrame) -> pd.DataFrame:
   ads["clicked"] = (ads["action"] == 'Clicked')
   ads["not_ignored"] = (ads["action"] != "Ignored")
   df = ads.groupby("ad_id")[["clicked", "not_ignored"]].sum().reset_index()
   df['ctr'] = round(100 * df["clicked"] / df["not_ignored"], 2)
   df['ctr'].fillna(0,inplace=True)
   return df[["ad_id", "ctr"]].sort_values(by=["ctr", "ad_id"], ascending=[False, True])
