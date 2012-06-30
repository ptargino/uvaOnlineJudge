#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a,b;
	for (int count = 1; count <= n; count++){
		cin >> a >> b;
		int total = 0;
		if (( a != b ) || ( a % 2 == 1 )){
			if (a % 2 == 0)
				a++;
			if (b % 2 == 0)
				b--;				
			total = ((a + b) * ((b-a)/2 +1))/2;
		}
		cout << "Case " << count << ": " << total << endl;
}
	}
