#include <bits/stdc++.h>

using namespace std;

int getMoneySpent(vector < int > keyboards, vector < int > drives, int s){
    // Complete this function
    int value = 0; vector<int> total;int ans = -1;
    for(int i =0; i< keyboards.size(); i++){
        for(int j = 0; j<drives.size(); j++){
            value = keyboards[i] + drives[j];
            total.push_back(value);
        }
    }
    sort(total.begin(), total.end());
    for(int i = total.size() -1; i>=0; i--){
        if(total[i] <= s){
            ans = total[i];
            break;
        }
    }
    return ans;
}

int main() {
    int s;
    int n;
    int m;
    cin >> s >> n >> m;
    vector<int> keyboards(n);
    for(int keyboards_i = 0; keyboards_i < n; keyboards_i++){
       cin >> keyboards[keyboards_i];
    }
    vector<int> drives(m);
    for(int drives_i = 0; drives_i < m; drives_i++){
       cin >> drives[drives_i];
    }
    //  The maximum amount of money she can spend on a keyboard and USB drive, or -1 if she can't purchase both items
    int moneySpent = getMoneySpent(keyboards, drives, s);
    cout << moneySpent << endl;
    return 0;
}
