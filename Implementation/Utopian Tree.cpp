#include <bits/stdc++.h>

using namespace std;

int utopianTree(int n) {
    // Complete this function
    int value = 1;
            for(int i =1; i<=n ; i++){
                if(i%2 != 0){
                    value *=2;
                }
                else if(i%2 == 0){
                    value += 1;
                }
            }
    return value;
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        int result = utopianTree(n);
        cout << result << endl;
    }
    return 0;
}

