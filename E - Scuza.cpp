#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define venkat_bobby ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


void bobs(){
  
  ll n,m;cin>>n>>m;
  vector <ll> v(n),v1(n),v3(n);
  
  map <ll,ll> m1;
  for(int i=0;i<n;i++){
    cin>>v[i];
    
    if(i==0){v3[0]=v[0];}
    v1[i]=v[i];
    if(i>0 && v1[i]<v1[i-1]){
      v1[i]=v1[i-1];
    }
    if(i>0){
    v3[i]=v[i]+v3[i-1];
    }
    if(!m1[v[i]]){
     m1[v[i]]=i+1;
    }
  }

  //sort(v1.begin(),v1.end());

  for(int i=0;i<m;i++){
     ll x;cin>>x;
     if(x==0 || x<v1[0]){
      cout<<0<<" ";continue;
     }
     auto it=upper_bound(v1.begin(),v1.end(),x);
     if(it==v1.end()){
      cout<<v3[n-1]<<" ";
     }else{
      cout<<v3[it-v1.begin()-1]<<" ";
     }
    }
  

  cout<<"\n";
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
