#include <iostream>
using namespace std;

int main(void) {
	int num[101]={0};
	int n,m;
	
	cin >> n >> m;
	
	for(int i=1;i<=n;i++)
		num[i]=i;
	
	for(int i=0;i<m;i++) {
		int a,b;
		
		cin >> a >> b;
		
		int temp;
		
		temp=num[a];
		num[a]=num[b];
		num[b]=temp;
	}
	
	for(int i=1;i<=n;i++)
		cout << num[i] << " ";
	
	return 0;
}