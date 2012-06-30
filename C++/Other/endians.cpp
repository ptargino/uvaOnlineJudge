#include <iostream>

using namespace std;

int main() { 	
	long long int i;
	while(cin >>i){
			long long int x1, x2, x3, x4;
			x1 = i >> 24;
			x2 = (i << 8) >> 24;
			x3 = (i << 16) >> 24;
			x4 = (i << 24) >> 24;
			long long int o = (x4 << 24) + (x3 << 16) + (x2 << 8) + (x1);
			cout <<i << " converts to " << o << endl;
	}

}
