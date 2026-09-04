class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st;
        stack<char>bt;
        for(char a:s){
            if(a=='#'){
                if(!st.empty())
                st.pop();
            }
            else{
                st.push(a);
            }
        }
        for(char b:t){
            if(b=='#'){
                if(!bt.empty())
                bt.pop();
            }
            else{
                bt.push(b);
            }
        }
        return st==bt;
        
    }
};