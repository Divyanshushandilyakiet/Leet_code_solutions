from itertools import permutations
class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        res=permutations(nums)
        return res
