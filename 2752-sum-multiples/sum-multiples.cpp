class Solution {
public:
    int sumOfMultiples(int n) {
        int sum=0;
        for(int i=1;i<=n;i++){
            int t=i;
            if(t%3==0 || t%5==0 || t%7==0 ){
                sum=sum+t;
            }
        }
        return sum;
    }
};