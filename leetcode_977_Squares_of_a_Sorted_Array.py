class Solution:
    def sortedSquares(self, nums):
        return sorted(list(map(lambda x : x * x, nums)))

l = [-4,-1,0,3,10]
obj = Solution()
l = obj.sortedSquares(l)
print(l)