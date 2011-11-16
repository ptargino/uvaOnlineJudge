#include <iostream>
#include <string>

using namespace std;

int main(){
    int SIZE = 26;
    string line;
    while (getline(cin,line)) {
        int quantUpper[SIZE];
        for(int i = 0; i < SIZE; i++)
            quantUpper[i] = 0;
        int quantLower[SIZE];
        for(int i = 0; i < SIZE; i++)
            quantLower[i] = 0;   
        int max = 0;
        for (int i = 0; i < line.size(); i++){
            char letter = line[i];
            if (letter >= 'a' && letter <= 'z')      quantLower[letter - 'a']++;
            else if (letter >= 'A' && letter <= 'Z') quantUpper[letter - 'A']++;
        }
        for(int i = 0; i < SIZE; i++)
            if (quantUpper[i] > max)  max = quantUpper[i];
        for(int i = 0; i < SIZE; i++)
            if (quantLower[i]  > max) max = quantLower[i];
        for (int i = 0; i < SIZE; i++)
            if (quantUpper[i] == max) printf("%c",('A' + i));
        for (int i = 0; i < SIZE; i++)
            if (quantLower[i] == max) printf("%c",('a' + i));
        printf(" %d\n",max);
    }
}
