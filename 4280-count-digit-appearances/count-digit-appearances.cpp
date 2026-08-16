class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        vector<int> v;
        int count=0;
        for(int i=0;i<nums.size();i++){
            while(nums[i]>0){
                int digit=nums[i]%10;
                v.push_back(digit);
                nums[i]=nums[i]/10;

            }
        }
        for(int j=0;j<v.size();j++){
            if(v[j]==digit){
                count++;
            }
        }
        return count;
    }
};