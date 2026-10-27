class Solution {
public:
    int minPartitions(string n) {
        int max_char=n[0];

        for(int i=1;i<n.size();i++){
            if(n[i]>max_char) max_char=n[i];
        }

        return max_char-'0';
    }
};