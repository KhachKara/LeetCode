# Given two binary strings a and b, return their sum as a binary string.
 
class Solution(object):
    def addBinary(self, a, b):
        """
        :type a: str
        :type b: str
        :rtype: str
        """
        a_int = int(a, 2)
        b_int = int(b, 2)
        sum_int = a_int + b_int
        res = bin(sum_int)[2:]
        return res