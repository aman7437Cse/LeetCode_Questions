class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int max=nums[nums.size()-1];
        int min=nums[0];
        for(int i=min;i>=1;i--){
            if(max%i==0 && min%i==0){
                return i;
            }
        }
        return 1;
    }
};