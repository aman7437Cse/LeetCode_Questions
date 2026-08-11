class Solution {
public:
    int numberOfSteps(int num) {
        int count=0;
        int sum=0;
        while(num>0){
            while(num%2==0){
                count++;
                num=num/2;
            }
            while(num%2!=0){
                sum++;
                num=num-1;
            }
        }
        return count+sum;
    }
};