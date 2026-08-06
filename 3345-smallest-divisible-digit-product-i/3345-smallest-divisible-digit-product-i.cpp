class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i=n;i<=200;++i){
            int sum=i;
            long long dpp=1;
            while(sum>0){
                int d=sum%10;
                dpp*=d;
                sum/=10;
            }
            if(dpp%t==0) return i;;
        }
        return -1;
    }
};