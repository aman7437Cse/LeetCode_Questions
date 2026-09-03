class Solution {
public:
    string reversePrefix(string word, char ch) {
        
        int count=1;
        bool flag=false;
        for(int i=0;i<word.size();i++){

            if(word[i]==ch){
                flag=true;
                break;
            }
                count++;
        }
        if(flag) reverse(word.begin(),word.begin()+count);
        return word;
        
    }
};