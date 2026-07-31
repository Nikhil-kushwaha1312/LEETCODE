class Solution {
public:
vector<vector<vector<int>>>dp;
    int solve(int i,int mt,int flag,vector<int>&prices){
        if(i==prices.size() || mt==0){
            return 0;
        }
        if(dp[i][mt][flag]!=-1){
            return dp[i][mt][flag];
        }
        if(flag){
            int sell=prices[i]+solve(i+1,mt-1,0,prices);
            int not_sell=solve(i+1,mt,1,prices);
            return dp[i][mt][flag]=max(sell,not_sell);
        }
        else{
            int buy=-prices[i]+solve(i+1,mt,1,prices);
            int not_buy=solve(i+1,mt,0,prices);
            return dp[i][mt][flag]=max(buy,not_buy);
        }
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        dp.assign(n,vector<vector<int>>(3,vector<int>(2,-1)));
        return solve(0,2,0,prices);
    }
};