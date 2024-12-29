#include <iostream>
using namespace std;

int main(void) {
	int num[1000000];
	int n,min=1000000,max=-1000000;
	
	cin >> n;
	
	for(int i=0;i<n;i++) {
		cin >> num[i];
		
		if(num[i]<min)
			min=num[i];
		if(num[i]>max)
			max=num[i];
	}
	
	cout << min << " " << max;
	
	return 0;
}