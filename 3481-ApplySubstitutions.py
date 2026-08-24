class Solution:
    def applySubstitutions(self, replacements: List[List[str]], text: str) -> str:
        
        repdict = {}
        for key,val in replacements: repdict[key] = val
        
        while "%" in text:
            chunks = text.split("%")
            new_text = ""
            for chunk in chunks:
                if chunk in repdict:new_text += repdict[chunk]
                else:new_text += chunk
            text = new_text
        
        return text
