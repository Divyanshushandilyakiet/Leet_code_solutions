class Solution {
public:
    int search(vector<int>& nums, int target) {
        int f=0,res;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                f=1;
                res=i;
                break;
            }
        }
            if(f==1)
                return res;
            else
                return -1;
    }
};
