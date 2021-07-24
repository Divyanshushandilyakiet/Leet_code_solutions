class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int cj=jewels.size();
        int cs=stones.size();
        int count=0;
        for(int i=0;i<cj;i++)
        {
            for(int j=0;j<cs;j++)
            {
                if(jewels[i]==stones[j])
                    count++;
            }
        }
        return count;
    }
};
