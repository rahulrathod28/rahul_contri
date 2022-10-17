#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define venkat_bobby ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


void bobs(){
  
  // ll n,m;cin>>n>>m;
  // vector <ll> v(n),v1(n),v3(n);
  // //vector <pair<ll,ll>> v2(n);
  // map <ll,ll> m1;
  // for(int i=0;i<n;i++){
  //   cin>>v[i];
  //   v1[i]=v[i];
  //   if(i==0){v3[0]=v[0];}
  //   if(i>0){
  //   v3[i]=v[i]+v3[i-1];
  //   }
  //   if(!m1[v[i]]){
  //    m1[v[i]]=i+1;
  //   }
  // }

  // sort(v1.begin(),v1.end());

  // for(int i=0;i<m;i++){
  //    int x;cin>>x;
  //    if(x==0 || x<v1[0]){
  //     cout<<0<<" ";continue;
  //    }
  //    auto it=upper_bound(v1.begin(),v1.end(),x);
  //    if(it==v1.end()){
  //     cout<<v3[n-1]<<" ";
  //    }else{
  //     cout<<v3[m1[*it]-2]<<" ";
  //    }
  //   }
  
  // //  for(int i=0;i<n;i++){
  // //   cout<<v3[i]<<" ";
  // //  }

  // cout<<"\n";

  ll n;
  cin>>n;
  vector <ll> v1(26,0),v2(26,0);
  v1[0]=1;v2[0]=1;
  ll a,b,k=0,k1=0,sum=0,sum1=0;
  string s,s1="a",s2="a";

  for(int i=0;i<n;i++){
    cin>>a>>b>>s;
    for(int j=0;j<s.size();j++){
      if(a==1){
        if(v1[s[j]-'a']==0){
          s1+=s[j];
        }
        v1[s[j]-'a']+=b;
        k+=s[j]-'a';
        sum+=b;
      }else{
        if(v2[s[j]-'a']==0){
          s2+=s[j];
        }
        v2[s[j]-'a']+=b;
        k1+=s[j]-'a';
        sum1+=b;
      }
    }

    //sort(s1.begin(),s1.end());
