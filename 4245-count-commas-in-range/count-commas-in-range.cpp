class Solution {
public:
    int countCommas(int n) {
        int count=0;
        int ans;
        if(n<1000){
            ans=0;
        }
        for(int i=1000;i<=n;i++){
            count++;

        }
        ans=count;
        return ans;
    }
};