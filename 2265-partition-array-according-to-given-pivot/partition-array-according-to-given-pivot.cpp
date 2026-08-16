class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> v;
        vector<int> equal;
        vector<int>r;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot){
                v.push_back(nums[i]);
            }
            else if(nums[i]>pivot){
                r.push_back(nums[i]);
            }
            else if(nums[i]==pivot){
                equal.push_back(nums[i]);
            }

            

        }
        v.insert(v.end(),equal.begin(),equal.end());
        v.insert(v.end(),r.begin(),r.end());
        return v;
    }
};