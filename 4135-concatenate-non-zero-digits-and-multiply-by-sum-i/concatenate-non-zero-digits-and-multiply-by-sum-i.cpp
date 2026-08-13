class Solution {
public:
    long long sumAndMultiply(int n) {
        
        vector<int>v;
        int sum=0;
        while(n>0){
        int d=n%10;
        sum=sum+d;
        if(d!=0){
        v.push_back(d);
        }
        n=n/10;
        }
        long long int x=0;

        for(int i=v.size()-1;i>=0;i--){
            x=x*10+v[i];
        }
        return x*sum;

    }
};