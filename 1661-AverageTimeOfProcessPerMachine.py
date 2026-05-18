import pandas as pd

def get_average_time(activity: pd.DataFrame) -> pd.DataFrame:

    dfstart = activity[activity['activity_type'] == 'start'][['machine_id', 'process_id', 'timestamp']].rename(columns={'timestamp': 'start_time'})
    dfend = activity[activity['activity_type'] == 'end'][['machine_id', 'process_id', 'timestamp']].rename(columns={'timestamp': 'end_time'})
    df = pd.merge(dfstart, dfend, on=['machine_id', 'process_id'])
    df['processing_time'] = df['end_time'] - df['start_time']
    res = df.groupby('machine_id').agg(total_time=('processing_time', 'sum'), num_processes=('process_id', 'count')).reset_index()
    res['processing_time'] = res['total_time'] / res['num_processes']
    res['processing_time'] = res['processing_time'].round(3)
    res = res[['machine_id', 'processing_time']]
    return res
