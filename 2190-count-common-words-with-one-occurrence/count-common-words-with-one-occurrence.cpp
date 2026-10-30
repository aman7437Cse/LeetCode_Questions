class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        map<string,int> mp1,mp2;
        for(string a: words1){
            mp1[a]++;
        }
        for(string a:words2){
            mp2[a]++;
        }
        int count=0;
        for(string a:words1){
            if(mp1[a]==1 && mp2[a]==1){
                count++;
                mp1[a]=0;
            }
        }
        return count;
        
    }
};