class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        sum=0
        mul=1
        while n!=0:
            digits=n%10
            sum=sum+digits
            mul=mul*digits
            n=n//10
            
        return mul-sum
