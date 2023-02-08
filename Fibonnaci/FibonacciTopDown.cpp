#include<iostream>
using namespace std;

int fibonacci(int n, int dp[]){
    if(n ==1 || n ==0){
        return n;
    }

    if(dp[n] != 0){
        return dp[n];
    }

    return dp[n] = fibonacci(n-1,dp) + fibonacci(n-2,dp);
}

int main(){
    int n=5;
    int dp[n] = {0};
    cout<<fibonacci(n,dp);

    return 0;
}
