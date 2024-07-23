class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>mp;
        map<int,vector<int>> mpp;
        
        for(int it:nums){
            mp[it]++;
        }
        for(auto it:mp){
            mpp[it.second].push_back(it.first);
        }
        vector<int>ans;
        for(auto it:mpp){
            int freq=it.first;
            vector<int> arr=it.second;
            sort(arr.begin(),arr.end(),greater<int>());
            for(int a:arr){
                int f=freq;
                while(f--){
                    ans.push_back(a);
                }
            }
        }
        return ans;
    }
};