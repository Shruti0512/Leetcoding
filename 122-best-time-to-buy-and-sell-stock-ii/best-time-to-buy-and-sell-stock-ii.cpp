class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MAX;
        int res=0,ans=0;
        for(int i=0;i<n;i++){
            if(mini>nums[i]){
                mini=nums[i];
            }
            // if(nums[i]-mini<0){
            //     mini=nums[i];
            // }
            ans=max(nums[i]-mini,0);
            res+=ans;
            if(ans>0){
                mini=nums[i];
            }
        }
        return res;
    }
};