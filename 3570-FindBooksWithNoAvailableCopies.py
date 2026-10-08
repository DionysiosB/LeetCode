import pandas as pd

def find_books_with_no_available_copies(library_books: pd.DataFrame, borrowing_records: pd.DataFrame) -> pd.DataFrame:

    b = borrowing_records[borrowing_records["return_date"].isnull()]
    b = b["book_id"].value_counts().reset_index()
    df = pd.merge(library_books, b, how = "left", on = "book_id")
    df = df[df["total_copies"] == df["count"]]
    df.drop(columns=['total_copies'], inplace=True)
    df.rename(columns={'count' : "current_borrowers"}, inplace=True)
    return df.sort_values(by=["current_borrowers", "title"], ascending=[False, True])

