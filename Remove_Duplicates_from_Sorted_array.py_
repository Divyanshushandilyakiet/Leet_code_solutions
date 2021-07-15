class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        if not nums:
            return 0
        prev_ele=0
        next_ele=1
        while(next_ele)<len(nums):
            if nums[prev_ele]!=nums[next_ele]:
                prev_ele+=1
                nums[prev_ele]=nums[next_ele]
            next_ele+=1
        return prev_ele+1
