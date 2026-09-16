class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int minPrice=0,sellPrice=1,maxProfit=0;

        while(sellPrice<prices.size()){

            if(prices[minPrice]>prices[sellPrice]){
                minPrice=sellPrice;
                sellPrice++;

            }

            else if(sellPrice==prices.size()-1 || prices[sellPrice]>prices[sellPrice+1]){
                maxProfit+=prices[sellPrice]-prices[minPrice];
                minPrice=++sellPrice;
            }

            else{
                sellPrice++;
            }
        }
        return maxProfit;
    }
};

//east solution
// int maxProfit=0;

// for(int i=1;i<prices.size();i++){

//     if(prices[i]>prices[i-1] maxProfit=prices[i]-prices[i-1];
// }
