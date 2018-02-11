#include <bits/stdc++.h>

using namespace std;

int hurdleRace(int k, vector <int> height) {
    // Complete this function
    int value;
    sort(height.begin(), height.end());
    if(height[height.size()-1] <= k){
        value = 0;
    }
    else if(height[height.size()-1] > k){
        value = height[height.size()-1] - k;
    }
    return value;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> height(n);
    for(int height_i = 0; height_i < n; height_i++){
       cin >> height[height_i];
    }
    int result = hurdleRace(k, height);
    cout << result << endl;
    return 0;
}

