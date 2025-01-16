class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        # Stack for unmatched opening brackets
        stack = []
        # Map closing brackets to opening brackets
        mapping = {')': '(', '}': '{', ']': '['}
        opening = set(mapping.values())

        for char in s:
            if char in opening:
                stack.append(char)  # Push opening brackets onto the stack
            elif stack and stack[-1] == mapping[char]:
                stack.pop()  # Match found, remove from stack
            else:
                return False  # Mismatch or unmatched closing bracket

        return not stack

