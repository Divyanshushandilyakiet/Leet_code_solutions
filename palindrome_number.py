class Solution:
    def isPalindrome(self, x: int) -> bool:
        x=str(x)
        reverse=x[::-1]
        if reverse==x:
            return 'true'
