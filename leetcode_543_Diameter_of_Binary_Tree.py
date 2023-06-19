class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
        
class Solution:
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        self.m = 0
        def bt(root):
            if root == None:
                return 0
            l = bt(root.left)
            r = bt(root.right)
            self.m = max(self.m, (l + r))
            return max(l,r) + 1
        bt(root)
        return self.m