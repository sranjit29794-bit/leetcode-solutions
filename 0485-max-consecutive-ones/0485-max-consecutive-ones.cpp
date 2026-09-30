class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxcnt=0,count=0;

        for(int x:nums){
            if(x==1){
                count++;
            }
            else{
                maxcnt=max(count,maxcnt);
                count=0;
            }
        }
        return max(count,maxcnt);
    }
};