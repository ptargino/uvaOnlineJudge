
#include <iostream>

using namespace std;

int main(){
    int num[9];
    while(cin >> num[8] >> num[7] >> num[6] >> num[5] >> num[4] >> num[3] >> num[2] >> num[1] >> num[0]){
        int first = 8;
        while(first > 0 && num[first] == 0)
            first--;
        if(first  > 1){
            if (num[first] != 1 && num[first] != -1)
                cout << num[first] <<"x^"<< first;
            else
                cout << (num[first] == 1 ? "x^" : "-x^" ) << first;
            first--;
            while(first > 1){
                if(num[first] != 0)
                    if (num[first] == 1)
                        cout << " + x^" << first;
                    else if (num[first] == -1)
                        cout << " - x^" << first;
                    else if (num[first] > 0)
                        cout << " + " << num[first] << "x^" << first;
                    else
                        cout << " - " << (-num[first]) << "x^" << first;
                first--;
            }
            if (num[first] != 0)
                if (num[first] == 1)
                    cout << " + x";
                else if (num[first] == -1)
                    cout << " - x";
                else if (num[first] > 0)
                    cout << " + " << num[first] << "x";
                else
                    cout << " - " << -num[first] <<"x";
            first--;
            if (num[first] != 0)
                if (num[first] > 0)
                    cout << " + " << num[first];
                else
                    cout << " - " << (-num[first]);
        } else if (first == 1 && num[first] != 0){
            if (num[first] == 1)
                cout << "x";
            else if (num[first] == -1)
                cout << "-x";
            else 
                cout << num[first] << "x"; 
            first--;
            if (num[first] != 0)
                if (num[first] > 0)
                    cout << " + " << num[first];
                else
                    cout << " - " << (-num[first]);
        } else  if (first == 0)
            cout << num[first];
        cout << endl;
    }

}
