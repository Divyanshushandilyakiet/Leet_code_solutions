class Solution:
    def climbStairs(self, n: int) -> int:
        cs={}
        cs[0]=1
        cs[1]=1

        for i in range(2,n+1):
        	steps = cs[i-1] + cs[i-2]
        	cs[i] = steps
        return cs[n]
