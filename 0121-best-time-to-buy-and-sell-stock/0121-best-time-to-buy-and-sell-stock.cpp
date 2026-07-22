class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int a=0;
        int min = prices[0];
        for(int i=0;i<prices.size();i++){
            if(prices[i]<min){
                min = prices[i];
            }else if(prices[i]-min>a){
                a=prices[i]-min;
            }
        }
        return a;
    }
};