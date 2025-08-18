import pandas as pd

def concatenate_info(person: pd.DataFrame) -> pd.DataFrame:
    def process(row): return row["name"] + "(" + row["profession"][0] + ")"
    person["name"] = person.apply(process, axis=1)
    return person[["person_id", "name"]].sort_values(by=["person_id"], ascending=False)
