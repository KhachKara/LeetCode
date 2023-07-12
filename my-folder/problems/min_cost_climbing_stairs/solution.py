# You are given an integer array cost where cost[i] is the cost of ith step on a staircase. Once you pay the cost, you can either climb one or two steps.

# You can either start from the step with index 0, or the step with index 1.
# Return the minimum cost to reach the top of the floor.

 
# class Solution(object):
#     def minCostClimbingStairs(self, cost):
#         """
#         :type cost: List[int]
#         :rtype: int
#         """
#         n = len(cost)
#         dp = [0] * n
    
#         # base cases
#         dp[0] = cost[0]
#         dp[1] = cost[1]
    
#         # compute dp[i] using the recurrence relation
#         for i in range(2, n):
#             dp[i] = cost[i] + min(dp[i - 1], dp[i - 2])
    
#         # return the minimum cost to reach the top
#         return min(dp[n - 1], dp[n - 2])
class Solution(object):
    def minCostClimbingStairs(self, cost):
        """
        :type cost: List[int]
        :rtype: int
        """

        #bc using cost in for loop
        one = 0
        two = 0

        #has to go backwards
        #reversed means biggest is still excluded
        for i in reversed(cost):
            temp = min(i + one, i + two)
            two = one
            one = temp

        #ends with last one being the oth cost index, so need to min that too to decide which to start at
        return min(one, two)
