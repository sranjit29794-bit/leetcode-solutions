class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int l=0,r=nums.size()-1;

        while(l<=r){
            if(nums[l]%2==0){
                nums[l]=0;
                l++;
            }else{
                swap(nums[l],nums[r]);
                nums[r]=1;
                r--;
            }
        }

        return nums;
    }
};