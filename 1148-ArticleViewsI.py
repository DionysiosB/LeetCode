import pandas as pd

def article_views(views: pd.DataFrame) -> pd.DataFrame:
  vs = list(set(views[views["author_id"] == views["viewer_id"]]["author_id"]))
  return pd.DataFrame({"id": sorted(vs)})
