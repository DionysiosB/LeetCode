import pandas as pd

def find_classes(courses: pd.DataFrame) -> pd.DataFrame:
    df = courses.groupby(["class"]).size().reset_index(name="count")
    df = df[df["count"] >= 5]
    return df[["class"]]
