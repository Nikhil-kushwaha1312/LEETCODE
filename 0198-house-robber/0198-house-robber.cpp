class Solution {
public:
    vector<int>dp;

    int solve(int i,vector<int>&arr){
        if(i==0) return max(arr[i],0);
        if(i<0) return 0;
        if(dp[i]!=-1) return dp[i];
        int take=arr[i]+solve(i-2,arr);
        int not_take=solve(i-1,arr);
        return dp[i]=max(take,not_take);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        dp.assign(n,-1);
        return solve(n-1,nums);
    }
};