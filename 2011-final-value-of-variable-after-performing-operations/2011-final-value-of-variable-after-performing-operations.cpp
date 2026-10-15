class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int sum=0;
        for(auto x:operations){
            sum+=44-x[1];
        }
        return sum;
    }
};