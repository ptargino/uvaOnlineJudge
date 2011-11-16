#include <map>
#include <iostream>

using namespace std;

string word;

bool validWord() {
	for (int i = 1; word[i] != '\0'; i++)
		if (word[i] <= word[i - 1])
			return false;
	return true;
}

int main() {
	map<string, long> index;
	long a = 1;
	int i, j, k, l, m;
	word = "a";
	for (i = 0; i < 26; i++) {
		word[0] = 'a' + i;
		index[word] = a++;
	}

	word = "aa";
	for (i = 0; i < 26; i++) {
		word[0] = 'a' + i;
		for (j = i + 1; j < 26; j++) {
			word[1] = 'a' + j;
			index[word] = a++;
		}
	}
	word = "aaa";
	for (i = 0; i < 26; i++) {
		word[0] = 'a' + i;
		for (j = i + 1; j < 26; j++) {
			word[1] = 'a' + j;
			for (k = j + 1; k < 26; k++) {
				word[2] = 'a' + k;
				index[word] = a++;
			}
		}
	}
	word = "aaaa";
	for (i = 0; i < 26; i++) {
		word[0] = 'a' + i;
		for (j = i + 1; j < 26; j++) {
			word[1] = 'a' + j;
			for (k = j + 1; k < 26; k++) {
				word[2] = 'a' + k;
				for (l = k + 1; l < 26; l++) {
					word[3] = 'a' + l;
					index[word] = a++;
				}
			}
		}
	}
	word = "aaaaa";
	for (i = 0; i < 26; i++) {
		word[0] = 'a' + i;
		for (j = i + 1; j < 26; j++) {
			word[1] = 'a' + j;
			for (k = j + 1; k < 26; k++) {
				word[2] = 'a' + k;
				for (l = k + 1; l < 26; l++) {
					word[3] = 'a' + l;
					for (m = l + 1; m < 26; m++) {
						word[4] = 'a' + m;
						index[word] = a++;
					}
				}
			}
		}
	}
	while (cin >> word)
		if (validWord())
			cout << index[word] << endl;
		else
			printf("0\n");

}
