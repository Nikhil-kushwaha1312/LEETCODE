class Solution {
public:
vector<vector<int>>dp;
    int solve(int i,int f,vector<int>&arr){
        if(i>=arr.size()) return 0;
        if(dp[i][f]!=-1) return dp[i][f];
        if(f){
            int sale=arr[i]+solve(i+2,0,arr);
            int n_sale=solve(i+1,1,arr);
            return dp[i][f]=max(sale,n_sale);
        }else{
            int buy=-arr[i]+solve(i+1,1,arr);
            int n_buy=solve(i+1,0,arr);
            return dp[i][f]=max(buy,n_buy);
        }
    }
    int maxProfit(vector<int>& prices) {
        if(prices.empty()) return 0;
        dp.assign(prices.size(),vector<int>(2,-1));
        return solve(0,0,prices);
    }
};