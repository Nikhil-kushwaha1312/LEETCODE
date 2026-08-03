class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int ans=nums[0];
        bool flag=true;
        for(int i=1;i<nums.size();i++){
            if(flag){
                ans-=nums[i];
                flag=false;
            }else{
                ans+=nums[i];
                flag=true;
            }
        }
        return ans;
    }
};