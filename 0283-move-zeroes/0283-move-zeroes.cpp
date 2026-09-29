class Solution {
public:
    void moveZeroes(vector<int>& nums) {
            int l=0,r=1;
            while(l<r && r!=nums.size()){
                if(nums[l]==0 && nums[r]!=0){
                    swap(nums[l],nums[r]);
                    l++,r++;
                    }

                else if(nums[l]!=0) l++,r++;
                else{
                    r++;
                }
            }
        }
};