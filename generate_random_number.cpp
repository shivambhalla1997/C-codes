#include <iostream>
using namespace std;

int main() {
    int k;
    srand(time(NULL));
    for(k=0;k<=10;k++,cout<<rand()%100<<" ");
	return 0;
}
