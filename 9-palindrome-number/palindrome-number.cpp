class Solution {
public:
    bool isPalindrome(int x) {
        long long rev=0;
        int o=x;
        if(x < 0)
            return false;
        while(o>0){
         rev=rev*10+o%10;
        o=o/10;
        }
        
        return x==rev;
        
    }
};