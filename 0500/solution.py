class Solution(object):

    row1, row2, row3 = set("qwertyuiop"), set("asdfghjkl"), set("zxcvbnm")

    @staticmethod
    def getRow(c):
        """Returns the row number corresponding to the given
        character or -1 if the character is not in any row.
        :type word: character
        :rtype: bool
        """        
        if c in Solution.row1:
            return 1
        elif c in Solution.row2:
            return 2
        elif c in Solution.row3:
            return 3
        return -1
    
    @staticmethod
    def oneRow(word):
        """ Returns True if word can be written with one row
        of the keyboard, otherwise returns False.
        :type word: str
        :rtype: bool
        """
        if len(word) == 0:
            return True
        word = word.lower()
        row = Solution.getRow(word[0])
        if row == -1:
            return False
        for c in word:
            if Solution.getRow(c) != row:
                return False
        return True
    
    def findWords(self, words):
        """
        :type words: List[str]
        :rtype: List[str]
        """
        return [word for word in words if Solution.oneRow(word)]
