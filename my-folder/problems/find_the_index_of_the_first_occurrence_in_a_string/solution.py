class Solution(object):
    def strStr(self, haystack, needle):
        """
        :type haystack: str
        :type needle: str
        :rtype: int
        """
        res_str = haystack.split(needle)

        if res_str[0] == '':
            return 0
        elif res_str[0] == haystack:
            return -1
        else:    
            return len(res_str[0])