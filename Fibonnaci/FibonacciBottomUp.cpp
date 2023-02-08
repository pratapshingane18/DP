#include<iostream>
using namespace std;

int fibonacci(int n){
   int dp[n+1] = {0};

   dp[0]=0;
   dp[1] =1;

   for(int i =2; i <= n; i++){
    dp[i] = fibonacci(i-1) + fibonacci(i-2);
   }

   return dp[n];
}

int main(){
    int n=3;
    int dp[n] = {0};
    cout<<fibonacci(n);

    return 0;
}
