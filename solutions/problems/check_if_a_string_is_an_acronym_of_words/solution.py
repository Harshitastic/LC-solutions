class Solution(object):
    def isAcronym(self, words, s):
        """
        :type words: List[str]
        :type s: str
        :rtype: bool
        """
        acronym = ""
        for word in words:
            if len(word) > 0:
                acronym += word[0]
            else:
                return False
        return acronym == s
