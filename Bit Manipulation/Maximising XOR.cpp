#include <bits/stdc++.h>

using namespace std;

int maximizingXor(int l, int r) {
    // Complete this function
    int ans = 0; vector<int> max;
    for(int i = l; i<= r; i++){
        for(int j = i ; j<= r; j++){
            ans = i^j;
            max.push_back(ans);
        }
    }
    sort(max.begin(), max.end());
    return max[max.size()-1];
}

int main() {
    int l;
    cin >> l;
    int r;
    cin >> r;
    int result = maximizingXor(l, r);
    cout << result << endl;
    return 0;
}

