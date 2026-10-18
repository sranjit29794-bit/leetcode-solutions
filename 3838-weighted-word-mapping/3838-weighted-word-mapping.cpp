class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string result;
    for (const std::string& word : words) {
            int total_weight = 0;
            for (char c : word) {
                total_weight += weights[c - 'a'];
            }
            int remainder = total_weight % 26;
            result += (char)('z' - remainder);
        }
        
        return result;      
    }
};