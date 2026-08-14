class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        int ans=arrivalTime+delayedTime;
        
        if(ans==24){
            ans=0;
        }
        else{
            ans=ans%24;
        }
        return ans;
    }
};