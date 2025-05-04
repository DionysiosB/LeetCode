class Solution(object):
    def dayOfYear(self, date):
        """
        :type date: str
        :rtype: int
        """

        from datetime import datetime
        ds = datetime.strptime(date, "%Y-%m-%d")
        return ds.timetuple().tm_yday 
        
