from itertools import permutations
class Solution:
    def permuteUnique(self, nums: List[int]) -> List[List[int]]:
        res=list(permutations(nums))
        perm=[]
        for i in res:
            if i not in perm:
                perm.append(i)
        return perm
