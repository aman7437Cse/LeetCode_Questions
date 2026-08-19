class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int> mp;
        for(int x:arr){
            mp[x]++;
        }
        int ans=-1;
        for(auto p:mp){
            if(p.first==p.second){
                ans=p.first;
            }
        }
        return ans;
    }
};