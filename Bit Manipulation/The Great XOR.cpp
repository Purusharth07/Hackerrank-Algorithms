#include <bits/stdc++.h>

using namespace std;

long theGreatXor(long x){
    // Complete this function
    long count = 0;
    for(long i = 1; i < x ; i++){
        if((i ^ x) > x){
            count++;
        }
    }
    return count;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        long x;
        cin >> x;
        long result = theGreatXor(x);
        cout << result << endl;
    }
    return 0;
}

