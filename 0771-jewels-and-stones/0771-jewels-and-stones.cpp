class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> jewelsSet(jewels.begin(), jewels.end());
    int ans = 0;
    for (const char stone : stones) {
      if (jewelsSet.count(stone)) {
        ++ans;
      }
    }
    return ans;
    }
};