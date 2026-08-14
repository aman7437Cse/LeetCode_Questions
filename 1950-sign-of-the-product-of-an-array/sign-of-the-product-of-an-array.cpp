class Solution {
public:
    int arraySign(vector<int>& nums) {
        long long int mult=1;
        int ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                return 0;
            }
            if(nums[i]<0){
                mult=mult*-1;
            }
        }
        return mult;
    }
};