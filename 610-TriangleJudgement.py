import pandas as pd

def triangle_judgement(triangle: pd.DataFrame) -> pd.DataFrame:
    def check(row):
        x = row["x"]
        y = row["y"]
        z = row["z"]
        if x >= y + z or y >= x + z or z >= x + y: return "No"
        else: return "Yes"

    triangle["triangle"] = triangle.apply(check, axis=1)
    return triangle
