class Solution {
public:
    vector<int> dfs(vector<vector<int>>& graph,int k){
        vector<int> indeg(k+1,0);
        for(int i=1;i<=k;i++){
            for(int j:graph[i]){
                indeg[j]++;
            }
        }
        queue<int> qu;
        for(int i=1;i<=k;i++){
            if(indeg[i]==0){
                qu.push(i);
            }
        }
        vector<int> ans;
        while(!qu.empty()){
            int node=qu.front();
            qu.pop();
            ans.push_back(node);

            for(int adj:graph[node]){
                indeg[adj]--;
                if(indeg[adj]==0){
                    qu.push(adj);
                }
            }
        }
        return ans.size()==k?ans:vector<int>();
    }
    vector<vector<int>> buildMatrix(int k, vector<vector<int>>& rowConditions, vector<vector<int>>& colConditions) {
        vector<vector<int>> rowgraph(k+1),colgraph(k+1);
        for(auto it:rowConditions){
            rowgraph[it[0]].push_back(it[1]);
        }
        for(auto it:colConditions){
            colgraph[it[0]].push_back(it[1]);
        }
        vector<int>rw=dfs(rowgraph,k);
        vector<int>cl=dfs(colgraph,k);
        if(rw.empty() || cl.empty()){
            return {};
        }
        unordered_map<int,int> rmp,clmp;

        for(int i=0;i<k;i++){
           rmp[rw[i]]=i;
           clmp[cl[i]]=i;
        }

        vector<vector<int>> ans(k,vector<int>(k,0));
        for(int i=1;i<=k;i++){
            ans[rmp[i]][clmp[i]]=i;
        }
        return ans;
    }
};