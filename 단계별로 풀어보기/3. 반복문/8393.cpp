#include <iostream>
using namespace std;

int main(void) {
	int a,sum=0;
	
	cin >> a;
	
	for(int i=1;i<=a;i++)
		sum+=i;
	
	cout << sum;
	
	return 0;
}