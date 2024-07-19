class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>r,c;
        for(auto row:matrix){
            int mini=INT_MAX;
            for(int col:row){
                mini=min(mini,col);
            }
            r.push_back(mini);
        }

        for(int j=0;j<m;j++){
            int maxi=INT_MIN;
            for(int i=0;i<n;i++){
                maxi=max(maxi,matrix[i][j]);
            }
            c.push_back(maxi);
        }
        vector<int> ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==r[i] && matrix[i][j]==c[j]){
                    ans.push_back(matrix[i][j]);
                }
            }
        }
        return ans;
    }
};