#include<iostream>
using namespace std;

// Top Down
// O(KN) Square Complexity
int CountWaysTD(int n, int k,int *dp){
    int ans=0;
    if(n ==0){
        return 1;
    }
    if(n <0){
        return 0;
    }

    if(dp[n] != 0){
        return dp[n];
    }

    for(int jump=1; jump <= k; jump++){
        ans += CountWaysTD(n-jump,k,dp);
    }

    return ans;
}

int main(){
    int n,k;
    cin>>n>>k;
    int dp[1000]={0};

    cout<<"Number of Ways are: "<<CountWaysTD(n,k,dp)<<endl;

    return 0;
}