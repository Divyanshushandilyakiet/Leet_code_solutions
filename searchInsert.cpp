class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int pos=0;
        for (int i=0;i<nums.size();i++)
        {   
            if(nums[i]==target) 
                return i;            
            else if(nums[i]<target) 
                pos=i+1;            
        }
        return pos;
    }
};
