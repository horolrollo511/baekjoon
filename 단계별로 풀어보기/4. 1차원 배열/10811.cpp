#include <iostream>
using namespace std;

int main(void) {
	int a[101];
	int n,m;
	
	cin >> n >> m;
	
	for(int i=1;i<=n;i++)
		a[i]=i;
	
	for(int i=0;i<m;i++) {
		int x,y;
		
		cin >> x >> y;
		
		for(int j=x;j<=(x+y)/2;j++) {
			int tmp;
			
			tmp=a[j];
			a[j]=a[y-j+x];
			a[y-j+x]=tmp;
		}
	}
	
	for(int i=1;i<=n;i++)
	    cout << a[i] << " ";
	
	return 0;
}