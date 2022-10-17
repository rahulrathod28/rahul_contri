#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define venkat_bobby ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


void bobs(){
  
  char dp[8][8];
  for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
      cin>>dp[i][j];
    }
  }
  
  for(int i=0;i<8;i++){
    int cnt=0,cnt1=0;
    for(int j=0;j<8;j++){
      if(dp[i][j]=='R'){cnt++;}
      //if(dp[i][j]=='B'){cnt1++;}
    }
    if(cnt==8){cout<<'R'<<"\n";return;}
    if(cnt1==8){cout<<'B'<<"\n";return;}
  }

  for(int i=0;i<8;i++){
    int cnt=0,cnt1=0;
    for(int j=0;j<8;j++){
      //if(dp[j][i]=='R'){cnt++;}
      if(dp[j][i]=='B'){cnt1++;}
    }
    if(cnt==8){cout<<'R'<<"\n";return;}
    if(cnt1==8){cout<<'B'<<"\n";return;}
  }

  return;
}

signed main(){
   venkat_bobby
    int t=1;
    cin>>t;
    while(t--){
        bobs();
    }
    return 0;
}
