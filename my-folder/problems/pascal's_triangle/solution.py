# Given an integer numRows, return the first numRows of Pascal's triangle.
# In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

class Solution(object):
    def generate(self, numRows):
        """
        :type numRows: int
        :rtype: List[List[int]]
        """
        dp = [[1]]
        for i in range(numRows - 1):
            temp = [0] + dp[-1] + [0]
            row = []
            for j in range(len(dp[-1]) + 1):
                row.append(temp[j] + temp[j + 1])
            dp.append(row)
        return dp
