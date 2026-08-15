class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int> v;
        vector<int> r;
        for(int i=0;i<nums.size();i++){
            v.push_back(nums[i]);
        }
        for(int j=(int)nums.size()-1;j>=0;j--){
            r.push_back(nums[j]);
        }
        v.insert(v.end(), r.begin(), r.end());
        return v;
    }
};