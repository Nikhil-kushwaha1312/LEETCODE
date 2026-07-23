class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int m=*max_element(nums.begin(),nums.end());
        int n=log2(m)+1;
        if(nums.size()<=2)return nums.size();
        return 1<<n;
    }
};