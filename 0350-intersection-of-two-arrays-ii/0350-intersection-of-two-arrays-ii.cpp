class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        unordered_map<int,int>mp;
        for(int it:nums1){
            mp[it]++;
        }
        vector<int> ans;
        for(int i=0;i<m;i++){
            if(mp[nums2[i]]>0){
                ans.push_back(nums2[i]);
                mp[nums2[i]]--;
            }
        }
        return ans;
    }
};