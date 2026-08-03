class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int>ans(matrix.size());
        for(int i=0;i<matrix.size();i++){
            int sum=0;
            for(int j=0;j<matrix[0].size();j++){
                sum+=matrix[i][j];
            }
            ans[i]=sum;
        }
        return ans;
    }
};