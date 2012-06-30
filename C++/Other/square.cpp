#include <iostream>

using namespace std;

int main(){
	long a, b;
	while( cin >> a >> b && (a || b)) {
		long count = 0;
		long i = a;
		while(i*i <=b){
			count++;
			i++;
		}
		cout << count << endl;
	}
}
