class Solution:
    def capitalizeTitle(self, title: str) -> str:
        return " ".join([x.lower() if len(x) <= 2 else x.title() for x in title.split()])

