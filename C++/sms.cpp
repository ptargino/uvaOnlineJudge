#include <string>
#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	string line;
	getline(cin, line);
	for(int j = 1; j <= n ; j++){
		getline(cin,line);
		int total = 0;
		for (int i = 0; i < line.size(); i++ ){
			char letter = line[i];
			if(letter==' ' || letter=='a' || letter=='d' || letter=='g' || letter=='j' || letter=='m' || letter=='p' ||letter=='t' || letter=='w')
				total += 1;
			else if (letter=='b' || letter=='e' || letter=='h' || letter=='k' || letter=='n' || letter=='q' ||letter=='u' || letter=='x')
				total += 2;
			else if (letter=='c' || letter=='f' || letter=='i' || letter=='l' || letter=='o' || letter=='r' ||letter=='v' || letter=='y')
				total += 3;
			else if (letter=='s' || letter=='z')
				total += 4;
		}
		cout << "Case #" << j << ": "<< total << endl;
	}
}
