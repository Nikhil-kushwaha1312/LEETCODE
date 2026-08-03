class Solution {
public:
    int digitFrequencyScore(int n) {
        int ans=0;
        while(n>0){
            int d=n%10;
            ans+=d;
            n=n/10;
        }
        return ans;
    }
};