class Solution {
public:
    int countSeniors(vector<string>& details) {
        int cnt=0;
        for(string detail:details){
            if(detail[11]>'6' || (detail[11]=='6' && detail[12]>'0')){
                cnt++;
            }
        }
        return cnt;
    }
};