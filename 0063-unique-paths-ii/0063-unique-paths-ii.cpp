class Solution {
public:
    vector<vector<int>>dp;
    int solve(int i,int j,vector<vector<int>>&a){
        int r=a.size()-1;
        int c=a[0].size()-1;
        if(i==r && j==c){
            return a[i][j]==0?1:0;
        }
        if(i>r || j>c || a[i][j]==1){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int down=solve(i+1,j,a);
        int right=solve(i,j+1,a);
        return dp[i][j]=down+right;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        dp.assign(r,vector<int>(c,-1));
        int i=solve(0,0,grid);
        return i;
    }
};