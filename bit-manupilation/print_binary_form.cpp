#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    if(n==0)
    {
        cout<<0;
    }
    else if(n==1)
    {
        cout<<1;
    }
    else
    {
        vector<int>binary_represenation;
        while(n!=1)
        {
            binary_represenation.push_back(n%2);
            n=n/2;
        }
        cout<<1;
        int k=binary_represenation.size();
        while(k--)
        {
            cout<<binary_represenation[k];
        }
    }
	return 0;
}
