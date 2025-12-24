class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        n = len(nums)
        sum = n * (n + 1) // 2
        given = 0

        for x in nums:
            given += x

        return sum - given
