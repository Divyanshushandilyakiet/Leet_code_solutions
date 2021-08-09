class Solution {
public:
    bool isPowerOfTwo(int n) {
        double num=n;
        while(num>1)
        {
            num=num/2;
        }
        if(num==1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
