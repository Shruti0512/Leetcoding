class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int cnt=0;
        for(int it:arr){
            if(it%2!=0){
                cnt++;
            }else{
                cnt=0;
            }
            if(cnt==3){
                return true;
            }
        }
        return false;
    }
};