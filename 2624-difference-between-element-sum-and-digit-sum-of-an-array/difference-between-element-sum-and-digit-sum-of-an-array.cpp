class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int esum=0;
        int dsum=0;
        for(int i=0;i<nums.size();i++){
            esum=esum+nums[i];
            int n=nums[i];
            while(n>0){
             int d=n%10;
             dsum=dsum+d;
             n=n/10;

            }
        }
        return esum-dsum;
    }
};