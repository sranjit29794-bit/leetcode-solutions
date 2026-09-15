class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1;

        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                nums[k]=nums[i];            
                k+=1;
                }
        }

        return k;
    }
};

//2nd method
// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         vector<int>expectedNums;

//         int key=INT_MIN;
//         int count=0;

//         for(auto x:nums){

//             if(x!=key) {
//                 expectedNums.push_back(x);
//                 key=x;
//                 count++;

//             }
//         }

//         nums=expectedNums;

//         return count;
//     }
// };
