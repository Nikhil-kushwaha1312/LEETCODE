class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        int i=0,j=0,maxi=INT_MIN;
        while(j<nums.size()){
            mpp[nums[j]]++;
            while(mpp[nums[j]]>k){
                mpp[nums[i]]--;
                i++;
            }
            maxi=max(maxi,j-i+1);
            j++;
        }
        return maxi;
    }
};