#include<bits/stdc++.h>

using namespace std;
#define boost        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main(){
  int N;
  cin>>N;
  int ans;
  cin>>ans;
  int a;
  for(int i=0;i<N-1;i++){
    cin>>a;
    ans=ans^a;
  }
  cout<<ans;
  return 0;
}
