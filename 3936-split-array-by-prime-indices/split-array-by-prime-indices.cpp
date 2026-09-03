class Solution {
public:

    bool prime(int n){
        if(n < 2) return false;

        for(int i = 2; i*i <= n; i++){
            if(n % i == 0){
                return false;
            }
        }

        return true;
    }

    long long splitArray(vector<int>& nums) {

        long long s1 = 0;
        long long s2 = 0;

        for(int i = 0; i < nums.size(); i++){

            if(prime(i)){
                s1 += nums[i];
            }
            else{
                s2 += nums[i];
            }
        }

        return abs(s1 - s2);
    }
};