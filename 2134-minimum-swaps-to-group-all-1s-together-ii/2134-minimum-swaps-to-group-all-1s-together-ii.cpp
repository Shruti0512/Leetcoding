class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int totone=0;
        int n=nums.size();
        for(int it:nums){
            totone+=it;
        }
        int current=0;
        if(totone==0 || totone==n){
            return 0;
        }
        
        for(int i=0;i<totone;i++){
            current+=nums[i];
        }
        
        int maxone=current;
        
        for(int i=0;i<n;i++){
            current-=nums[i];
            current+=nums[(i+totone)%n];
            maxone=max(maxone,current);
        }
        return (totone-maxone);
    }
};