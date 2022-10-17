#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define venkat_bobby ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


void bobs(){
  
  ll n;cin>>n;
  vector <ll> v(n),ans;
  set <ll> s;
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  bool f=true;
  ll cur=0,id;
  while(f){
    f=false;
    ll temp;
    temp=cur;
    for(int i=0;i<n;i++){
      if((cur|v[i])>temp && s.find(i)==s.end()){
        f=true;
        id=i;
        temp=(v[i]|cur);
      }
    }

    if(f){
    ans.push_back(v[id]);
    cur=(cur|v[id]);
    s.insert(id);
    }

  }

  for(int i=0;i<n;i++){
    if(s.find(i)==s.end()){
      ans.push_back(v[i]);
    }
  }

  for(int i=0;i<n;i++){
    cout<<ans[i]<<" ";
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
