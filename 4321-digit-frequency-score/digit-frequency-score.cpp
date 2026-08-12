class Solution {
public:
    int digitFrequencyScore(int n) {
        int count=0;
        while(n>0){
            int d=n%10;
            count=count+d;
            n=n/10;
        }
        return count;
    }
};