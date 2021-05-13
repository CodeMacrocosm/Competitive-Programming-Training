//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
//AUTHOR: shreyamalogi

class Solution {
public:
    int maxProfit(vector<int>& v) {
        
        int i=0,m=0,m1=INT_MAX;
        int ans=0;
        for(i=0;i<v.size();i++)
        {
            m1=min(m1, v[i]);
            ans=max(v[i]-m1,ans);
         }
         return ans;
        
    }
};
