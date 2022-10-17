#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define venkat_bobby ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


void bobs(){
  
  int n;
  cin>>n;
  vector <int> v(n);
  map <int,int> m;
  for(int i=0;i<n;i++){
    cin>>v[i];
    m[v[i]]=i+1;
  }

  int maxi=-1;

  for(auto it=m.begin();it!=m.end();it++){
    for(auto it1=m.begin();it1!=m.end();it1++){
      int a=(*it).first;
      int b=(*it1).first;
      int c=(*it).second;
      int d=(*it1).second;
    if(__gcd(a,b)==1){
      maxi=max(maxi,c+d);
    }
  }
  }

  cout<<maxi<<"\n";

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
