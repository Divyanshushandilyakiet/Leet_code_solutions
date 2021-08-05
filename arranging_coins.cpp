class Solution {
public:
    int arrangeCoins(int n) 
    {
        int i = 1;
        int c=0;
       while(n>=0)
       {
          n=n-i;
          i++; 
          c++; 
       }
       return c-1;
    }
};
