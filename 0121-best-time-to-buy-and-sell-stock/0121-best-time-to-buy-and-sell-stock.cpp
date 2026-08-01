class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        if(n==0) return 0;
        int min_price=prices[0];
        int max_price=0;
        for(int i=1;i<n;i++){
            if(prices[i]<min_price){
                min_price=prices[i];
            }else{
                max_price=max(max_price,prices[i]-min_price);
            }
        }
        return max_price;
    }
};