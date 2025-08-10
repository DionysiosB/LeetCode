import pandas as pd

def invalid_tweets(tweets: pd.DataFrame) -> pd.DataFrame:
    def isInvalid(s): return (len(s) > 15)
    tweets["invalid"] = tweets["content"].apply(isInvalid)
    tweets = tweets[tweets["invalid"]]
    return tweets[["tweet_id"]
