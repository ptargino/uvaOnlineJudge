#include <iostream>
#include <map>

using namespace std;

int main() {
	string englishWord, foreignWord;
	map<string, string> dictionary;
	while (cin >> englishWord && englishWord.size()) {
		cin >> foreignWord;
		cout << englishWord << " " << foreignWord << endl;
		dictionary[foreignWord] = englishWord;
	}
	cout << "passou" << endl;
	while (cin >> foreignWord) {
		if (dictionary[foreignWord].compare("") == 0) {
			cout << dictionary[foreignWord] << endl;
		} else
			cout << "eh" << endl;
	}

}
