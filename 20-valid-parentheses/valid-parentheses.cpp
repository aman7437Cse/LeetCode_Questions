class Solution {
public:
    bool isValid(string s) {
        stack<char> a;
        for(char ch:s){
            if(ch=='(' ||ch=='{' || ch=='['){
                a.push(ch);
            }
            else{
                if(a.empty())
                return false;

                if((ch==')' && a.top()!='(') || (ch=='}' && a.top()!='{') || (ch==']' && a.top()!='[')){
                    return false;
                }
                else{
                    a.pop();
                }

            }
        }
        return a.empty();
    }
};