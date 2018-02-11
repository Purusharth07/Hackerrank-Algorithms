#include <bits/stdc++.h>

using namespace std;

int getTotalX(vector <int> a, vector <int> b) {
    // Complete this function
    int count = 0;
    for(int  i =1; i<=100; i++){
        int value =1;
        for(int j = 0; j<a.size(); j++){
            if(i%a[j] !=0){
                value =0;
            }
        }
        for(int k =0; k<b.size(); k++){
            if(b[k]%i != 0){
                value =0;
            }
        }
        if(value == 1){
            count++;
        }
        }
    return count;
}
   
int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0; b_i < m; b_i++){
       cin >> b[b_i];
    }
    int total = getTotalX(a, b);
    cout << total << endl;
    return 0;
}
