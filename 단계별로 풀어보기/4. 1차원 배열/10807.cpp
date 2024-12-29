#include <iostream>
using namespace std;

int main(void) {
	int num[100];
	int n,a,cnt=0;
	
	cin >> n;
	
	for(int i=0;i<n;i++)
		cin >> num[i];
	
	cin >> a;
	
	for(int i=0;i<n;i++)
		if(num[i]==a)
			cnt++;
	
	cout << cnt;
	
	return 0;
}