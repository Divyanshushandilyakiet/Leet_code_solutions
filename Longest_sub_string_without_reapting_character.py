class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        if s=="":
            return 0
        result, left = 0, 0
        lookup = {}
        for i in range(len(s)):
            if s[i] in lookup:
                left = max(left, lookup[s[i]]+1)
            lookup[s[i]] = i
            result = max(result, i-left+1)
        return result
        
