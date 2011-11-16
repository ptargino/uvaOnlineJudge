#include <iostream>

using namespace std;

long long func(long long n){
    long long total = 0;
    long long num = n;
    while (num > 0){
        total += num % 10;
        num /= 10;
    }
    return (total < 10)? total: func(total);
}

int main(){
    long long num;
    while (cin >> num && num)
        cout << func(num) << endl;

}
