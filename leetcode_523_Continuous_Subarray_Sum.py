class Solution:
    def checkSubarraySum(self, nums, k) -> bool:
        for i in range(1, len(nums)):
            nums[i] += nums[i - 1]
        
        for i in range(len(nums)):
            nums[i] %= k
        
        d = {0:-1}

        for i in range(len(nums)):
            if nums[i] not in d:
                d[nums[i]] = i
            else:
                if i - d[nums[i]] > 1:
                    return True
        return False
    
obj = Solution()
nums = [23, 2, 4, 6, 7]
k = 6
if obj.checkSubarraySum(nums, k):
    print("Yes")
else:
    print("No")