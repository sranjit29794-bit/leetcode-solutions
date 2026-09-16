class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        unordered_set<int> s(nums.begin(),nums.end());

        return s.size()!=nums.size();
    }
};