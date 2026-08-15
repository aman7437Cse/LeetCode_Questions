class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int> v;
        
        
        for(int i=0;i<nums.size();i++){
            int sum=0;
            while(nums[i]>0){
                int d=nums[i]%10;
                sum=sum+d;
                
                nums[i]=nums[i]/10;
                
            }
            v.push_back(sum);
        }
        sort(v.begin(),v.end());
        return v[0];
    }
};