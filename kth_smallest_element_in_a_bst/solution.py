class Solution(object):
    def kthSmallest(self, root, k):
        """
        :type root: Optional[TreeNode]
        :type k: int
        :rtype: int
        """
        # Stack for iterative in-order traversal
        stack = []
        current = root

        # Perform in-order traversal with early stopping
        while True:
            # Go as left as possible
            while current:
                stack.append(current)
                current = current.left
            
            # Process the node
            current = stack.pop()
            k -= 1  # Decrement k (count the node)
            
            # If we find the kth smallest, return it
            if k == 0:
                return current.val
            
            # Move to the right child
            current = current.right
