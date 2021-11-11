#include <iostream>
using namespace std;

int main() {
    int n=0, m=0 , l=0, j=1, k=0, i=0;
    cin >> n;
    if(n>2) {
        cout << j << endl;
        while (m < n - 1) {
            k = j + l;
            cout << k << endl;
            i=j;
            j= j+l;
            l=i;
            m++;

        }
    }

    return 0;
