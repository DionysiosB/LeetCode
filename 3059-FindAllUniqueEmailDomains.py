import pandas as pd

def find_unique_email_domains(emails: pd.DataFrame) -> pd.DataFrame:
  emails["email_domain"] = emails["email"].apply(lambda x: x.split('@')[1])
  emails = emails[emails["email_domain"].str.endswith(".com")]
  emails = emails[["email_domain"]].value_counts().reset_index()
  emails.sort_values(by=["email_domain"], ascending=True, inplace=True)
  return emails
