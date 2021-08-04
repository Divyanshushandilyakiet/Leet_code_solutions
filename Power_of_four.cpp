class Solution {
public:
    bool isPowerOfFour(int n) {
         double num=n;
        while (num>1)
            num=num/4;
        if (num==1)
            return true;
        else
            return false ;  
    }
};
