class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int b=0,s=1,d=0,max=0;

        for(int i=1;i<prices.size();i++){

            if(prices[b]>prices[s]){
                b=s;
                s++;
            }
            else{
                d=prices[s]-prices[b];

                if(d>max) max=d;

                s++;

            }


        }
        return max;
    }
};