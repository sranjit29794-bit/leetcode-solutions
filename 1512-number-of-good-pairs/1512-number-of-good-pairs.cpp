class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> counts;
        int good_pairs = 0;
        
        for (int num : nums) {
            good_pairs += counts[num];
            counts[num]++;
        }
        
        return good_pairs;
        
    }
};