class Solution {
public:
    vector<vector<int>>dp;
    int solve(int i,int j,int m,int n){
        if(i==m-1 && j==n-1){
            return 1;
        }
        if(dp[i][j]!=-1) return dp[i][j];
        int right=0;int down=0;
        if(i<m-1){
            down=solve(i+1,j,m,n);
        }
        if(j<n-1){
            right=solve(i,j+1,m,n);
        }
        return dp[i][j]=down+right;
    }
    int uniquePaths(int m, int n) {
        dp.assign(m,vector<int>(n,-1));
        return solve(0,0,m,n);
    }
};