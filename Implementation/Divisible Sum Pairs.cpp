#include <bits/stdc++.h>

using namespace std;

int divisibleSumPairs(int n, int k, vector <int> ar) {
    // Complete this function
    int value = 0;
    for(int i = 0; i< ar.size(); i++){
        for(int j = 0; j< ar.size(); j++){
            if(i < j){
                if((ar[i]+ar[j])%k == 0){
                    value++;
                }
            }
        }
    }
    return value;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = divisibleSumPairs(n, k, ar);
    cout << result << endl;
    return 0;
}
