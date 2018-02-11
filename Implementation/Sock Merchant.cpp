#include <bits/stdc++.h>

using namespace std;

int sockMerchant(vector <int> ar) {
    // Complete this function
    int count=0;
    sort(ar.begin(), ar.end());
    for(int i =0; i<ar.size(); i++){
        if(ar[i]==ar[i+1]){
            count++;
            i +=1;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = sockMerchant(ar);
    cout << result << endl;
    return 0;
}

