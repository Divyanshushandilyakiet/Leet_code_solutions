class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        for(int i = digits.size()-1;i>-1;--i)
        {
        if(digits[i] != 9)
        {
            ++digits[i];
            return digits;
        }
        digits[i] = 0;
    }
    if(digits[0] == 0) 
        digits.insert(digits.begin(), 1);
    return digits;
    }
};
