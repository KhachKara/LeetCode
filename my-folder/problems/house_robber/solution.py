# You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security systems connected and it will automatically contact the police if two adjacent houses were broken into on the same night.

# Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.

# class Solution(object):
#   def rob(self, nums):
#     """
#     :type nums: List[int]
#     :rtype: int
#     """
#     if len(nums) == 0:
#       return 0
#     if len(nums) <= 2:
#       return max(nums)
#     dp = [0 for i in range(0, 2)]
#     dp[0] = nums[0]
#     dp[1] = max(nums[1], nums[0])
#     for i in range(2, len(nums)):
#       dp[i % 2] = max(dp[(i - 1) % 2], dp[(i - 2) % 2] + nums[i])
#     return dp[(len(nums) - 1) % 2]

# class Solution(object):
#     def rob(self, nums):
#         """
#         :type nums: List[int]
#         :rtype: int
#         """
#         #how much money gained at each house, going all even or odd?
#         array = [0]*len(nums)
#         if len(nums) == 1:
#             return nums[0]
#         array[0] = nums[0]
#         array[1] = nums[1]
#         if len(nums) == 2:
#             return max(nums[0], nums[1])
#         array[2] = nums[2] + nums[0]
#         if len(nums) == 3:
#             return max(array[2], array[1])
#         #print(array)
#         for i in range(3, len(nums)):
#             array[i] = nums[i] + max(array[i-2], array[i-3])
#         #print(array)
#         return max(array[-2],array[-1])

class Solution(object):
    def rob(self, nums):
        if len(nums) == 1: return nums[0]
        dp = [0] * (len(nums) + 1)
        dp[0] = nums[0]
        dp[1] = max(dp[0], nums[1])
        for i in range(2, len(nums)):
            dp[i] = max(dp[i - 1], dp[i - 2] + nums[i])
        return dp[len(nums) - 1]