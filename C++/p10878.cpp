#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	string out = "A quick brown fox jumps over the lazy dog.";
	sort(out.begin(), out.end());
	cout << out;

}
