class Solution {
public:
    string reverseWords(string s) {
        string res="";
        vector<string> ans;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                if(res != ""){
                    ans.push_back(res);
                }
                res="";
                continue;
            }
            else{
                res+=s[i];
            }
        }
        ans.push_back(res);
        reverse(ans.begin(),ans.end());
        res="";
        int m=ans.size();
        for(int i=0;i<m-1;i++){
            if(ans[i]!=""){
                res+=ans[i];
                    res+=" ";
            }
        }
        res+=ans[m-1];
        return res;
    }
};