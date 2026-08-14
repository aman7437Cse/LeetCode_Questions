class Solution {
public:
    int countEven(int num) {
        vector<int> v;
        int sum=0;
        int count=0;
        for(int i=1;i<=num;i++){
            int temp=i;
            int sum=0;
            while(temp>0){
                int d=temp%10;
                sum=sum+d;
                temp=temp/10;
            }
            if(sum%2==0){
                count++;
            }
        }
        return count;
    }
};