# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        res = []
        stk = [root]
        while (stk):
            node = stk.pop()
            if (node):
                stk.append(node.right)
                stk.append(node.val)
                stk.append(node.left)
            else:
                if (stk) :
                    res.append(stk.pop())
        return res