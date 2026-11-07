class Solution {
public:
    bool isSameAfterReversals(int num) {
        int r1=0;
        int r2=0;
        int a=num;
        
        while(a>0){
            int r=a%10;
            r1=r1*10+r;
            a=a/10;
        }
        int t=r1;
        while(t>0){
            int s=t%10;
            r2=r2*10+s;
            t=t/10;
        }
        return r2==num;
    
        
    }
};