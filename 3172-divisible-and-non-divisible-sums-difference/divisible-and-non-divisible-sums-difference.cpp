class Solution {
public:
    int differenceOfSums(int n, int m) {
        int sum=0;
        int dum=0;
       for(int i=1;i<=n;i++){
        
        if(i%m==0){
            sum=sum+i;
        }
        else if(i%m!=0){
            dum=dum+i;

        }

       } 
       return dum-sum;
    }
};