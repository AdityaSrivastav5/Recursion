class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string> d;
        solve(0,s,ans,d);
        return ans;
    }
    void solve(int ind,string s,vector<vector<string>>&ans,vector<string>&d){
        if(ind==s.size()){
            ans.push_back(d);
            return;
        }
        for(int i=ind;i<s.size();i++){
            if(ispalindrome(s,ind,i)){
                d.push_back(s.substr(ind,i - ind +1 ));
                solve(i+1,s,ans,d);
                d.pop_back();
            }
        }
    }
    bool ispalindrome(string s,int start,int end){
       while(start<=end){
            if(s[start++]!=s[end--])
               return false;
       }
       return true;
       
    }
};
