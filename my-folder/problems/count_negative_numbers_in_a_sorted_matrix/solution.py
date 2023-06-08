class Solution(object):
    def countNegatives(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        counter = 0
        for col in grid:
            for row in col:
                if row < 0:
                    counter += 1
        return counter
