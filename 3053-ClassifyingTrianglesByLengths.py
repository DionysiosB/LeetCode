import pandas as pd

def type_of_triangle(tdf: pd.DataFrame) -> pd.DataFrame:
    def gettype(row):
        a, b, c = row["A"], row["B"], row["C"]
        if(a >= b + c or b >= a + c or c >= a + b): return "Not A Triangle"
        elif(a == b and b == c):return "Equilateral"
        elif(a == b or b == c or c == a):return "Isosceles"
        else:return "Scalene"

    tdf["triangle_type"] = tdf.apply(gettype, axis='columns')
    return tdf[["triangle_type"]]
