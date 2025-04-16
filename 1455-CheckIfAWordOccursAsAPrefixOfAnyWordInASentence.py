class Solution(object):
    def isPrefixOfWord(self, sentence, searchWord):
        """
        :type sentence: str
        :type searchWord: str
        :rtype: int
        """
        
        words = sentence.split(' ')
        for p in range(len(words)):
            if words[p].startswith(searchWord):
                return p + 1
        return -1
