class Solution {
public:
    bool checkGoodInteger(int n) {
        int sum=0;
        int sq=0;
        while(n>0){
            int digit=n%10;
            sum=sum+digit;
            sq=sq+digit*digit;
            n=n/10;

        }
        if((sq-sum)>=50){
            return true;
        }
        else{
            return false;
        }

    }
};