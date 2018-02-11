#include <bits/stdc++.h>

using namespace std;

string bonAppetit(int n, int k, int b, vector <int> ar) {
    // Complete this function
    string value ;int total = 0 , actual =0, refund =0;
    for(int  i =0; i<ar.size(); i++){
        total += ar[i];
    }
    actual = (total - ar[k])/2;
    if(actual == b){
        value = "Bon Appetit";
    }
    else if(actual < b){
        refund = b - actual;
        value = to_string(refund);
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
    int b;
    cin >> b;
    string result = bonAppetit(n, k, b, ar);
    cout << result << endl;
    return 0;
}

