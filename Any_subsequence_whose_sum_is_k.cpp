#include<iostream>
#include<algorithm>
#include<iterator>
#include<array>
#include<vector>
#include<complex>
#include <cstdlib>
#include <string>
#include <numeric>
#include <sstream>

using namespace std;
bool printF(int ind,vector<int>&ans,int s,int arr[],int sum,int n){
    if(ind==n){
        if(s==sum){
            for(int i=0;i<ans.size();i++) 
                cout<<ans[i]<<" ";
                cout<<endl;
                return true;
        }
        else return false;
    }
    ans.push_back(arr[ind]);
    s+=arr[ind];
    //take the value
    if(printF(ind+1,ans,s,arr,sum,n)==true) return true;
    s-=arr[ind];
    ans.pop_back();
   
    if(printF(ind+1,ans,s,arr,sum,n)==true)return true;
    return false;
    

}
int main(){
    int arr[]={1,2,1};
    int n = 3;
    int sum=2;
    vector<int> ans;
    printF(0,ans,0,arr,sum,n);
    return 0;

    
}
