class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>expectedNums;

        int key=INT_MIN;
        int count=0;

        for(auto x:nums){

            if(x!=key) {
                expectedNums.push_back(x);
                key=x;
                count++;

            }
        }

        nums=expectedNums;

        return count;
    }
};