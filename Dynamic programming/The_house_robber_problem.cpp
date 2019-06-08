#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
typedef long long ll;

int arr[1000005];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int N;
	cin>>N;
	if(N==1){  //if has only one house
		cin>>arr[0];
		cout<<arr[0];
	}
	else if(N==2){ //if has only 2 houses
		cin>>arr[0];
		cin>>arr[1];
		cout<<max(arr[0],arr[1]);
	}
	else{  //more than 2 houses
		int money[N];
		for(int i=0;i<N;i++)
			cin>>money[i];
		arr[0]=money[0];
		arr[1]=max(money[0],money[1]);
		for(int i=2;i<N;i++){
			arr[i]=max(arr[i-2]+money[i],arr[i-1]);
		}
		cout<<arr[N-1];
	}
  return 0;
}
