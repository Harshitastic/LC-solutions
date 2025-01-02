class Solution(object):
    def sumOfEncryptedInt(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        def encrypt(x):
            y = str(x)                
            c = max(y)                
            z = int(c * len(y))      
            return z

        total = sum(encrypt(x) for x in nums)  
        return total

        