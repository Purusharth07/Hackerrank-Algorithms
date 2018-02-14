#include <bits/stdc++.h>

using namespace std;

int lonelyinteger(vector <int> a) {
    // Complete this function
    int ans;
    sort(a.begin(), a.end());
    if(a.size()==1){
        return a[0];
    }
    else{
    for(int i = 0; i < a.size(); i++){
        if(a[i] == a[i+1]){
            i = i+1;
        }
        else{
            ans = a[i];
        }
     }
  }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    int result = lonelyinteger(a);
    cout << result << endl;
    return 0;
}

