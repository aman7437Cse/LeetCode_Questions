class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> v;
        int ans;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                v.push_back(i);
            }
        }
        sort(v.begin(),v.end());
        if(k<=v.size()){
       ans=v[k-1];
        
        }
        else{
           ans=-1;
        }
        return ans;
    }
};