class Solution {
public:
    int distributeCandies(vector<int>& candyType) 
    {
        int n=candyType.size(),count=1;
        sort(candyType.begin(),candyType.end());
        int temp=candyType[0];
        for(int i=1;i<n;i++)
        {
           if(candyType[i]!=temp)
           {
             count++;
             temp=candyType[i];
            }
        }
        if((n/2)>count)
           return count;
        else
           return n/2;

    }
};
