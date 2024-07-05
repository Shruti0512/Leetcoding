class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n=nums.size();
        if(n<=4){
            return 0;
        }
        int ans=INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i=0;i<4;i++){
            for(int j=(n+i-4);j<n;j++){
                ans=min(ans,nums[j]-nums[i]);
            }
        }
        return ans;
    }
};