class Solution {
public:
    void solve(vector<vector<int>>&result,vector<int>&temp,vector<int>&candidates,int t,int i){
        if(t ==0){
            result.push_back(temp);
            return ;
        }
        if(t<0) return ;
        for(int j=i;j<candidates.size();j++){
            temp.push_back(candidates[j]);
            solve(result,temp,candidates,t-candidates[j],j);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>result;
        vector<int>temp;
        solve(result,temp,candidates,target,0);
        return result;
    }
};