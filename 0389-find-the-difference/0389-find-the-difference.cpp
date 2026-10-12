class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum=0;

        for(char x:s){
            sum^=x;
        }
        for(char y:t){
            sum^=y;
        }

        return (char)sum;
    }
};