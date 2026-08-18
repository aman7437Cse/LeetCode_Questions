class Solution {
public:
    long long removeZeros(long long n) {
        vector <int> v;
        long long no=0;
        while(n>0){
            int d=n%10;
            if(d!=0){
                v.push_back(d);
            }
            n=n/10;
        }
        for(int i=v.size()-1;i>=0;i--){
            no=no*10+v[i];
        }
        return no;
    }
};