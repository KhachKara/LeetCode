# Given an integer rowIndex, return the rowIndexth (0-indexed) row of the Pascal's triangle.
# In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

# class Solution(object):
#     def getRow(self, rowIndex):
#         """
#         :type rowIndex: int
#         :rtype: List[int]
#         """
#         dp = [[1]]
#         for i in range(1, rowIndex + 1):
#             tmp = [1 for _ in range(i + 1)]
#             for j in range(1, len(tmp) - 1):
#                 tmp[j] = dp[-1][j] + dp[-1][j - 1]
#             dp.append(tmp)
       
#         return dp[-1]

class Solution(object):
    def getRow(self, rowIndex):
        ans=[[1]]
        for i in range(rowIndex):
            l=[]
            temp=[0]+ans[-1]+[0]
            for j in range(len(ans)+1):
                l.append(temp[j]+temp[j+1])
            ans.append(l)
        return ans[rowIndex]