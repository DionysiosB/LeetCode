import pandas as pd

def find_unrated_books(books: pd.DataFrame) -> pd.DataFrame:

    books = books[books["rating"].isna()]
    books.drop(columns=["rating"], inplace=True)
    books.sort_values(by="book_id", ascending=True,inplace=True)
    return books

