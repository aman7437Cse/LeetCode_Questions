class Solution {
public:
    string toHex(int num) {
        string ans = "";

        vector<char> v = {
            '0','1','2','3','4','5','6','7',
            '8','9','a','b','c','d','e','f'
        };

        if(num == 0)
            return "0";

        unsigned int n = num;

        while(n > 0) {
            int rem = n % 16;
            ans += v[rem];
            n = n / 16;
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};