#include<bits/stdc++.h>
using namespace std;

// Top Down
// O(KN) Square Complexity
int CountWaysBU(int n, int k){
   vector<int> dp(n+1,0);
    dp[0] =1;
   for(int i =1; i <=n; i++){
        for(int jump =1; jump<=k; jump++){
            if(i - jump >=0){
                dp[i] += dp[i-jump];
            }
        }
   }

   return dp[n];

      
}

int main(){
    int n,k;
    cin>>n>>k;
    int dp[1000]={0};

    cout<<"Number of Ways are: "<<CountWaysBU(n,k)<<endl;

    return 0;
}