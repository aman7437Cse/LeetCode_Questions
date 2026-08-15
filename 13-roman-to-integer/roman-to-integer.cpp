class Solution {
public:
     int val(char c){
        if(c=='I')return 1;
        if(c=='V')return 5;
        if(c=='X')return 10;
        if(c=='L')return 50;
        if(c=='C')return 100;
        if(c=='D')return 500;
        return 1000;
     }
    int romanToInt(string s) {
        int ans=0;
        for(int i=0;i<s.size()-1;i++){
            if(val(s[i])<val(s[i+1])){
                ans=ans-val(s[i]);
            }
            else{
                ans=ans+val(s[i]);
            }
        }
        ans=ans+val(s[s.size()-1]);
        return ans;
    }
};