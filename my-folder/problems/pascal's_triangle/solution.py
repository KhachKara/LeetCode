# Given an integer numRows, return the first numRows of Pascal's triangle.
# In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

class Solution(object):
    def generate(self, numRows):
        """
        :type numRows: int
        :rtype: List[List[int]]
        """
        if numRows <= 0:
            return []
        result = []
        pre = []
        pre.append(1)
        result.append(pre)
        for i in range(0, numRows-1):
            curr = []
            curr.append(1)
            for j in range(0, len(pre)-1):
                curr.append(pre[j]+pre[j+1])
            curr.append(1)
            result.append(curr)
            pre = curr
        return result