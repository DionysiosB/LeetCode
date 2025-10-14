import pandas as pd

def acceptance_rate(fr: pd.DataFrame, ra: pd.DataFrame) -> pd.DataFrame:
    dfa = fr.groupby(["sender_id", "send_to_id"]).last().reset_index()
    dfb = ra.groupby(["requester_id", "accepter_id"]).last().reset_index()
    rate = np.round(100 * len(dfb) / len(dfa))/100 if len(dfa) else 0.00
    return pd.DataFrame({"accept_rate": [rate]})
