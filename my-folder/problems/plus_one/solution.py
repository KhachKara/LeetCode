# You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

# Increment the large integer by one and return the resulting array of digits.
# моё решение 
# class Solution(object):
#     def plusOne(self, digits):
#         """
#         :type digits: List[int]
#         :rtype: List[int]
#         """
#         dig_len = len(digits)
#         num = 0
#         res = []
#         for i in range(1, dig_len + 1):
#             num += digits[-i] * 10**(i-1)
#             if i - 1 == 0:
#                 num += 1
        
#         res = [int(digit) for digit in str(num)]
#         return res

class Solution(object):
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        """
        d=0
        for i in digits:
            d=d*10+i
        d+=1
        s=str(d)
        digits=[]
        for i in s:
            digits.append(int(i))
        return digits