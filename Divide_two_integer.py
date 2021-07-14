class Solution:
    def divide(self, dividend: int, divisor: int) -> int:
        result = abs(dividend) // abs(divisor)
        if (dividend < 0 and divisor > 0) or (dividend > 0 and divisor < 0):
            
            if result < -2**31:
                return -2**31 
            return -result
        
        if result > 2**31-1:
            return 2**31-1
        return result
