class Solution {
public:
    bool isPalindrome(int x) {
        long long rev=0;
        int o=x;
        if(x < 0)
            return false;
        while(x>0){
         rev=rev*10+x%10;
        x=x/10;
        }
        if(o==rev){
        return true;}
        else{
        return false;}
    }
};