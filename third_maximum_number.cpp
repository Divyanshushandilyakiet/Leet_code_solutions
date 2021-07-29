class Solution {
public:
    int thirdMax(vector<int>& nums) 
    {
        int n=nums.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            maxi=max(nums[i],maxi);
        }
        if(n<=2)
          return maxi;
        else
        {
          sort(nums.begin(),nums.end());
          int c=1;
          for(int i=n-2;i>=0;i--)
          {
             if(nums[i+1]!=nums[i])
             c++;
             if(c ==3)
             return nums[i];
          }
          return nums[n-1];
         }
    }
};
