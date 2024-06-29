class Solution {
public:
    set<int> st;
    void f(int node,unordered_map<int,vector<int>>& mp){
        st.insert(node);
        for(auto it:mp[node]){
            if(!st.count(it)){
                f(it,mp);
            } 
        }
    }
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        unordered_map<int,vector<int>> mp;
        for(auto it:edges){
            mp[it[1]].push_back(it[0]);
        }
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            st.clear();
            for(int it:mp[i]){
                f(it,mp);
            }
            ans.push_back({st.begin(),st.end()});
        }
        return ans;
    }
};