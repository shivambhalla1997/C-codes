#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int num,k;
	cin>>num>>k;
	int n=pow(2,k-1);
	if(num&(n))
	{
	    cout<<"SET";
	}
	else
	{
	    cout<<"NOT SET";
	}
	return 0;
}
