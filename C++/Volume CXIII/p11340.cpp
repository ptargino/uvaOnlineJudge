#include <iostream>
#include <string>

using namespace std;

int main(){
    int value[65536];
    int n;
    cin >> n;
    for(int i = 0; i < n; i ++){
        for(int i = 0; i < 65536; i++)
            value[i] = 0;
        int m;
        cin >> m;
        string line;
        for (int j = 0 ; j < m; j++){
            char letter;
            cin >> letter;
            cin >> value[letter];
        }
        int total = 0;
        cin >> m;
        for (int j = 0 ; j < m; j++){
            getline(cin,line);
            for(int k = 0; k < line.size(); k++){
                total += value[line[k]];
            }
        }
        printf("%d.%d$\n",(total/100), total%100);
    }
    
}
