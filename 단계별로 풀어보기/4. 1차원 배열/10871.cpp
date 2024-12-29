#include <iostream>
using namespace std;

int main(void) {
	int num[10000];
	int n,a;
	
	cin >> n >> a;
	
	for(int i=0;i<n;i++)
		cin >> num[i];
	
	for(int i=0;i<n;i++)
		if(num[i]<a)
			cout << num[i] << " ";
	
	return 0;
}