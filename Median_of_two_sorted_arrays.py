import numpy as np
import statistics
class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        nums=np.concatenate((nums1,nums2))
        nums.sort()
        result=median(nums)
        return result
