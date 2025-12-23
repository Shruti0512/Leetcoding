class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
        set<long long>st;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i>indexDiff){
                st.erase(nums[i-indexDiff-1]);
            }
            auto pt = st.lower_bound((nums[i]-valueDiff));
            if(pt!=st.end() && ((*pt)-nums[i])<=valueDiff){
                return true;
            }
            st.insert(nums[i]);
        }
        return false;
    }
};