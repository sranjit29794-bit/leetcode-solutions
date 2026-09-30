class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max=0,count=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                if(count>max) max=count;
                count=0;
            }
            else if(i==nums.size()-1){
                count++;
                if(count>max) max=count;
            }
            else count++;
        }
        return max;
    }
};