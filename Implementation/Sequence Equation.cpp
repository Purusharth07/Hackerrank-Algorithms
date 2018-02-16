#include <bits/stdc++.h>

using namespace std;

vector <int> permutationEquation(vector <int> p) {
    // Complete this function
    vector<int> ans; vector<int> pre;
    for(int i = 1; i <= p.size(); i++){
        for(int j = 0; j<p.size(); j++){
            if(p[j] == i){
                pre.push_back(j+1);
            }
        }
    }
    for(int i = 0; i < pre.size(); i++){
        for(int j = 0; j< p.size(); j++){
            if(pre[i] == p[j]){
                ans.push_back(j+1);
            }
        }
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    for(int p_i = 0; p_i < n; p_i++){
       cin >> p[p_i];
    }
    vector <int> result = permutationEquation(p);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;


    return 0;
}

