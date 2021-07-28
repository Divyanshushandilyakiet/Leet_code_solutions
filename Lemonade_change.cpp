class Solution {
public:
    bool lemonadeChange(vector<int>& bills) 
    {
        int bill5 = 0;
        int bill10 = 0;
        for(int i = 0; i < bills.size(); i++) 
        {
             if(bills[i] == 5) bill5++;
             if(bills[i] == 10) 
             {
                 if(bill5 <= 0) 
                    return false;
                 else 
                 {
                     bill5--;
                     bill10++;
                 }
             }
            
             if(bills[i] == 20) 
             {
                 if(bill5 <= 0) 
                    return false; 
                 else 
                 {
                     if(bill10 >= 1 && bill5 >= 1) 
                     {
                         bill10--;
                         bill5--;
                     } 
                     else if(bill5 >= 3) 
                        bill5 = bill5-3;
                     else
                        return false;
                 }
             }
        }
        return true;
    }
};
