class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int a:nums){
            mp[a]++;
        }
        vector<int> v;
        for(int a:nums){
            if(mp[a]==1){
                v.push_back(a);
            }
        }
        int sum=0;
        for(int i=0;i<v.size();i++){
            sum+=v[i];
        }
        return sum;
        
    }
};