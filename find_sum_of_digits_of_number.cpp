#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    //sum of the digits of the number
    int sum;
    for(sum=0;n!=0;sum=sum+n%10,n=n/10);
    cout<<sum;
	return 0;
}
