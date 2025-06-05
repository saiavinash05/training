#include <bits/stdc++.h>
using namespace std;

void print(int *a) {
    int **b=&a;
    cout<<**b<<endl;
}



int main() {
    int x;
    cin >> x;
    print(&x);
    return 0;
}
