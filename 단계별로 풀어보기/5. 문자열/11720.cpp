#include <iostream>
#include <string>
using namespace std;

int main(void) {
	int n, sum=0;
	string a;
	
	cin >> n >> a;
	
	for(int i=0;i<n;i++){
		sum+=a[i]-48;
	}

	cout << sum;
	
	return 0;
}