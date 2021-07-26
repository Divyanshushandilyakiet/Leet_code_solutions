  
class Solution {
public:
    bool isUgly(int n) 
    {
        if(n <= 0) return false;
        vector<int> factors = {2, 3, 5};
        for(int factor : factors) 
        {
            while(n % factor == 0) n = n / factor;
        }
        
        return n == 1;
    }
};
