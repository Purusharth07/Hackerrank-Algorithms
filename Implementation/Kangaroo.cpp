#include <bits/stdc++.h>

using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {
    // Complete this function
    int k1 = x1; int k2 = x2;
    string value;
    for(int j = 0; j < 10000 ; j++ ){
        k1 += v1;
        k2 += v2;
        if(k1 == k2){
            value = "YES";
            break;
        }
    }
    if(k1 != k2){
        value = "NO";
    }
    return value;
}

int main() {
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
    string result = kangaroo(x1, v1, x2, v2);
    cout << result << endl;
    return 0;
}
