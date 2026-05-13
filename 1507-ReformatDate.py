class Solution:
    def reformatDate(self, date: str) -> str:

        md = {"Jan":"01", "Feb":"02", "Mar":"03", "Apr":"04", "May":"05", "Jun":"06", "Jul":"07", "Aug":"08", "Sep":"09", "Oct":"10", "Nov":"11", "Dec":"12"}
        day, month, year = date.split(" ")
        day = ''.join(c for c in day if c.isdigit())
        if(len(day) < 2): day = "0" + day
        month = md[month]
        return "-".join([year, month, day])

