class Solution {
public:
    vector<int>dp;
    int solve(int i,vector<int>arr){
        int n=arr.size();
        if(i<0) return 0;
        if(i==0) return arr[0];
        if(dp[i]!=-1) return dp[i];
        int take=arr[i]+solve(i-2,arr);
        int not_take=solve(i-1,arr);
        return dp[i]=max(take,not_take);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        vector<int>a1,a2;
        for(int i=0;i<nums.size();i++){
            if(i!=0) a1.push_back(nums[i]);
            if(i!=n-1) a2.push_back(nums[i]);
        }
        int ans1,ans2;
        dp.assign(a1.size(),-1);
        ans1=solve(a1.size()-1,a1);
        dp.assign(a2.size(),-1);
        ans2=solve(a2.size()-1,a2);
        return max(ans1,ans2);
    }
};