#include <iostream>
using namespace std;

int main (void) {  
    int stored[14];
    for(int i = 0; i < 14; i++)
        stored[i] = 0;
    int k;
    while ((cin>>k) && k) {  
        if(stored[k] == 0){
            int m = k;
            while(true){
                int size = k * 2;
                int position = (m - 1) % size;
                while (position >= k && size > k) {
                    size--;
                    position = (position-1+m)%size;
                }
                if (size==k)
                    break;
                m++;
            }
            stored[k] = m;
        }
        cout << stored[k] << endl;
    }
}
