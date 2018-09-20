#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int num,k;
	cin>>num>>k;
	int n=pow(2,k-1);
	cout<<(num&(~n));
	return 0;
}
