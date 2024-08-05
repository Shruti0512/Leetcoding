class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        int n=arr.size();
        unordered_map<string,int> mp;
        for(string it:arr){
            mp[it]++;
        }
        int i=0;
        string ans="";
        while(i<n){
            if(mp[arr[i]]==1){
                k--;
                if(k==0){
                    ans=arr[i];
                    return ans;
                }
            }
            i++;
        }
        return "";
    }
};