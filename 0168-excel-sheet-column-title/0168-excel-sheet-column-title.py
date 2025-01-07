class Solution(object):
    def convertToTitle(self, columnNumber):
        s=""
        while(columnNumber>0):
            s = s + chr((columnNumber-1) % 26 + 65)
            columnNumber = (columnNumber - 1) / 26
        
        return s[::-1]
        