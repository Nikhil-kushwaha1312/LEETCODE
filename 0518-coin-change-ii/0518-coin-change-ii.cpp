class Solution {
public:
    vector<vector<int>>dp;
    int solve(int i,int t,vector<int>&coins){
        if(t==0){
            return 1;
        }
        if(i==coins.size()){
            return 0;
        }
        if(dp[i][t]!=-1) return dp[i][t];
        int take=0;
        if(coins[i]<=t){
            take=solve(i,t-coins[i],coins);
        }
        int not_take=solve(i+1,t,coins);
        return dp[i][t]=take+not_take;
    }
    int change(int amount, vector<int>& coins) {
        dp.assign(coins.size(),vector<int>(amount+1,-1));
        return solve(0,amount,coins);
    }
};