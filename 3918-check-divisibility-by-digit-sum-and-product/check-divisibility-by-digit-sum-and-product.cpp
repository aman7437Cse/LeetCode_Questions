class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int mul=1;
        int temp=n;
        
        while(temp>0){
            int d=temp%10;
            sum=sum+d;
            mul=mul*d;
            temp=temp/10;

        }
        int a=sum+mul;
        
            return n%a==0;
        
        
    }
};