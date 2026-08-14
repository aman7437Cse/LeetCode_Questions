class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                v.push_back(nums[i]);
            }
        }
        while(v.size()<nums.size()){
            v.push_back(0);
        }
        nums=v;
    }
};