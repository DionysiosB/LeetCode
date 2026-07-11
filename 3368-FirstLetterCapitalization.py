import pandas as pd

def process_text(user_content: pd.DataFrame) -> pd.DataFrame:

    def sentenceCap(sentence: str):
        cs = ' '.join([word.capitalize() for word in sentence.split()])
        return cs

    user_content.rename(columns = {"content_text" : "original_text"}, inplace=True)
    user_content["converted_text"] = user_content["original_text"].apply(sentenceCap)
    return user_content
