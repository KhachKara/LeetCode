# You are given an integer array nums. You want to maximize the number of points you get by performing the following operation any number of times:

# Pick any nums[i] and delete it to earn nums[i] points. Afterwards, you must delete every element equal to nums[i] - 1 and every element equal to nums[i] + 1.
# Return the maximum number of points you can earn by applying the above operation some number of times.

class Solution(object):
    def deleteAndEarn(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if not nums:
            return 0

        # Find the maximum number in the input array
        max_num = max(nums)

        # Create a new array to keep track of the sums
        sums = [0] * (max_num + 1)

        # Count the occurrences of each number
        for num in nums:
            sums[num] += num

        # Apply dynamic programming to calculate the maximum points
        dp = [0] * (max_num + 1)
        dp[1] = sums[1]
        for i in range(2, max_num + 1):
            dp[i] = max(dp[i - 1], dp[i - 2] + sums[i])

        return dp[max_num]

sol = Solution()
nums = [2, 2, 2, 3, 3, 3, 3, 4, 4]
print(sol.deleteAndEarn(nums))
