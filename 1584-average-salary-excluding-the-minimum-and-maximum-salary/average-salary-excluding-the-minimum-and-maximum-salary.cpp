class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        int sum=0;
        for(int i=0;i<salary.size();i++){
            sum=sum+salary[i];
        }
        int up=sum-salary[0]-salary[salary.size()-1];
        double avg=(double)up/(salary.size()-2);
        return avg;
    }
};