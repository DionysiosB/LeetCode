class Solution(object):
    def daysBetweenDates(self, date1, date2):
        """
        :type date1: str
        :type date2: str
        :rtype: int
        """
        from datetime import date,datetime
        da = datetime.strptime(date1, "%Y-%m-%d")
        db = datetime.strptime(date2, "%Y-%m-%d")
        delta = db - da
        return abs(delta.days)

