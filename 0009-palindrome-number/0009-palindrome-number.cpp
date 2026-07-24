class Solution {
public:
    bool isPalindrome(int x) {
        
        long int revNum=0;
        int original=x;
        if(x<0){
            return false;
        }else{
            while(x!=0){
                revNum=(revNum*10)+(x%10);
                x/=10;
            }

            if (original==revNum){
                return true;
            }
            return false;
        }
    }
};