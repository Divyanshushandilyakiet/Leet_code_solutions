  
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        if haystack ==""and needle=="":
            return 0
        if needle not in haystack:
            return -1
        else:
            result=haystack.find(needle)
            return result
