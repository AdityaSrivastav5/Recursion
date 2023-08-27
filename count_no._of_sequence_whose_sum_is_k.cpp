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
int printF(int ind,vector<int>&ans,int s,int arr[],int sum,int n){
    if(ind==n){
        if(s==sum){
            return 1;
        }
        return 0;
    }
    
    s+=arr[ind];
    //take the value
    int l=printF(ind+1,ans,s,arr,sum,n);
    s-=arr[ind];
    
   
    int r=printF(ind+1,ans,s,arr,sum,n);
    return l+r;
}
int main(){
    int arr[]={1,2,1};
    int n = 3;
    int sum=2;
    vector<int> ans;
    cout<<printF(0,ans,0,arr,sum,n);

    return 0;

    
}
