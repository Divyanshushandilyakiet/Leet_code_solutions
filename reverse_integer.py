class Solution:
    def reverse(self, x: int) -> int:
        if x==0:
            return 0
        elif x<0:
            x=str(x)
            if x[0]=='-':
                reverse=('-' + x[-1:0:-1])
                reverse=int(reverse)
                if reverse>(2**31)-1 or reverse<-2**31:
                    return 0
                else:
                    return reverse
        else:
            reverse=(str(x))[::-1]
            reverse=int(reverse)
            if reverse>(2**31)-1 or reverse<-2**31:
                return 0
            else:
                return reverse
