class Solution(object):
    def subsetXORSum(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        def dfs(index, current_xor):
            if index == len(nums):  # Base case: all elements considered
                return current_xor  # Return XOR total of this subset
        # Include the current element or skip it
            include = dfs(index + 1, current_xor ^ nums[index])  # Include nums[index]
            exclude = dfs(index + 1, current_xor)               # Exclude nums[index]
            return include + exclude  # Add results of both choices
    
        return dfs(0, 0)