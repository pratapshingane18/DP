#include<iostream>
using namespace std;

// Recurrsion 
// O(K^N) Exponential Complexity
int CountWays(int n, int k){
    int ans=0;
    if(n ==0){
        return 1;
    }
    if(n <0){
        return 0;
    }

    for(int jump=1; jump <= k; jump++){
        ans += CountWays(n-jump,k);
    }

    return ans;
}

int main(){
    int n,k;
    cin>>n>>k;

    cout<<"Number of Ways are: "<<CountWays(n,k)<<endl;

    return 0;
}