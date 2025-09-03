import pandas as pd

def students_and_examinations(students: pd.DataFrame, subjects: pd.DataFrame, examinations: pd.DataFrame) -> pd.DataFrame:
    dfa = pd.merge(students, subjects, how="cross")
    dfb = examinations.groupby(['student_id', 'subject_name']).agg(attended_exams=('subject_name', 'count') ).reset_index()
    dfc = pd.merge(dfa, dfb, on=['student_id','subject_name'], how='left').sort_values(by = ['student_id', 'subject_name'])
    dfc["attended_exams"].fillna(0, inplace=True)
    return dfc[['student_id', 'student_name', 'subject_name', 'attended_exams']]
