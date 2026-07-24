class Solution {
public:
    int reverse(int x) {

     long long int revNum=0;

        while(x!=0){
            revNum=(revNum*10)+(x%10);
            x/=10;
        }

        if(revNum>=INT_MIN && revNum<=INT_MAX){
            return revNum;
        }else{
            return 0;
        }
    }
};