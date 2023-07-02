class Solution(object):
    def removeDuplicates(self, nums):
        i, j = 0, 0
        while j < len(nums):
            if nums[j] == nums[i]:
                j += 1
            else:
                i += 1 
                nums[i] = nums[j]
        return i+1
        