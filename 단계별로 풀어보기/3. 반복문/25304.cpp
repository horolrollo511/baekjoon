#include <iostream>
using namespace std;

int main(void) {
	int sum,n;
	
	cin >> sum >> n;
	
	for(int i=0;i<n;i++){
		int a,b;
		
		cin >> a >> b;
		
		sum-=a*b;
	}
	
	if(sum==0)
		cout << "Yes";
	else
		cout << "No";
	
	return 0;
}