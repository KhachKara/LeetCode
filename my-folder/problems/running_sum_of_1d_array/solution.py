class Solution(object):
    def runningSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        n = len(nums)
        runningSum = [0] * n  

        runningSum[0] = nums[0]

        for i in range(1, n):
            runningSum[i] = runningSum[i - 1] + nums[i]

        return runningSum 