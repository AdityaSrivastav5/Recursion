class Solution {

public:
    void findcombination(int ind,vector<int>&candidates,int target,vector<vector<int>> &ans,vector<int> &ds ){
        if(ind==candidates.size()){
            if(target==0)
              ans.push_back(ds);
            return;
        }
        if(candidates[ind]<=target){
            //Pick the number or same number pick 
            ds.push_back(candidates[ind]);
            findcombination(ind,candidates,target-candidates[ind],ans,ds);
            //remove element which u add in vector after its use is over (backtrack)
            ds.pop_back();
        }
        //Not pick the number & just move forward
       findcombination(ind+1,candidates,target,ans,ds); 
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        findcombination(0,candidates,target,ans,ds);
        return ans;
    }
};
