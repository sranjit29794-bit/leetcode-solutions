class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int l=0,k=0,r=nums.size()-1;
        while(l<=r){
            if(nums[l]!=val) l++;
            else{
                swap(nums[l],nums[r]);
                r--;
                k++;
            }
        }
        return nums.size()-k;
    }
};