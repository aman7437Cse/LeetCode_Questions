class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0;
        int mul=1;
        
        while(n>0){
            int d=n%10;
            sum=sum+d;
            mul=mul*d;
            n=n/10;
        }
        return mul-sum;
    }
};