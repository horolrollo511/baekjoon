#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	int a[10];
	vector<int> v;
	int cnt=0;
	
	for(int i=0;i<10;i++) {
		int x;
		
		cin >> x;
		
		a[i]=x%42;
	}
	
	for(int i=0;i<10;i++) {
		bool is_there=false;
		
		for(int j=0;j<v.size();j++)
			if(a[i]==v[j])
				is_there=true;
		
		if(is_there==false)
			v.push_back(a[i]);
	}
	
	cout << v.size();
	
	return 0;
}