#include <bits/stdc++.h>

using namespace std;

long solve(long n) {
    // Complete this function
    long count =0;
    for(long i = 0; i<=n; i++){
        if((i+n) == (i ^ n) ){
            count++;
        }
    }
    return count;
}

int main() {
    long n;
    cin >> n;
    long result = solve(n);
    cout << result << endl;
    return 0;
}

