#include <bits/stdc++.h>
using namespace std;

    void solve (int ind, int sum, vector<vector<int>>&ans, vector<int>&ds, int k, int n){
        if(sum==n & k==0){
            ans.push_back(ds);
            return;
        }
        if(sum>n) return;
        for(int i=ind;i<10;i++){
            ds.push_back(i);
            solve(i+1, sum+i, ans, ds, k-1, n);
            ds.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>ds;
        solve(1, 0, ans, ds, k, n);
        return ans;
    }

int main() {
    int k=3, n=7;
    vector<vector<int>>ans = combinationSum3(k, n);
    for(auto it: ans){
        for(auto j: it) cout<<j<<" ";
        cout<<"\n";
    }
    
}