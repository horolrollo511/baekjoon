#include <iostream>
using namespace std;

int main(void) {
	int a[1000];
	int n,max=-1;
	double sum=0.0;
	
	cin >> n;
	
	for(int i=0;i<n;i++) {
		cin >> a[i];
		
		if(a[i]>max)
			max=a[i];
	}
	
	for(int i=0;i<n;i++) 
		sum+=(double)a[i]/max*100;
	
	cout << sum/n;
	
	return 0;
}