#include <iostream>
using namespace std;

int main (void) {  
    unsigned long long int a,b,result;
    while ((cin>>a>>b)) {
		result = (b>a?b-a:a-b);
        cout << result  << endl;
	}
}
