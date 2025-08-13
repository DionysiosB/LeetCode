import pandas as pd

def createDataframe(student_data: List[List[int]]) -> pd.DataFrame:
    return pd.DataFrame({"student_id": [x[0] for x in student_data], "age":[x[1] for x in student_data]})

