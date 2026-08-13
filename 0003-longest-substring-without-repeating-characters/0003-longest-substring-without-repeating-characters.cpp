class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int j=0,n=s.size(),maxi=0;
        unordered_map<char,int>mpp;
        for(int i=0;i<n;i++){
            if(mpp.find(s[i]) != mpp.end() && mpp[s[i]]>=j){
                j= mpp[s[i]]+1;
            }
            mpp[s[i]]=i;
            maxi=max(maxi,i-j+1);
        }
        return maxi;
    }
};