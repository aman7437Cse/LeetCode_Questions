class Solution {
public:
    bool validDigit(int n, int x) {
        vector<int> v;
        while(n>0){
            int d=n%10;
            v.push_back(d);
            n=n/10;
        }
         if(v.empty())
            return false;

            
        if(v.back()==x){
            return false;
        }
        for(int i=0;i<v.size();i++){
            if(v[i]==x){
                return true;
            }
        }
           return false;
    }
};