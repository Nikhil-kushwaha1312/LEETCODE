class Solution {
public:
    vector<int>dp;
    int solve(int t,vector <int> arr){
        if(t ==0) return 0;
        if(t<0) return 1e9;
        if(dp[t]!=-1) return dp[t];
        int ans=1e9;
        for(auto coin:arr){
            ans=min(ans,1+solve(t-coin,arr));
        }
        return dp[t]=ans;
    }
    int coinChange(vector<int>& coins, int amount) {
        dp.assign(amount+1,-1);
        int ans=solve(amount ,coins);
        if(ans==1e9){
            return -1;
        }else return ans;
    }
};