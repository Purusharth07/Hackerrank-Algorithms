#include <bits/stdc++.h>

using namespace std;

int viralAdvertising(int n) {
    // Complete this function
    int value =0, ans = 2, num = 5/2;
    for(int i =0; i<n-1 ;i++){
        value = num*3;
        num = value/2;
        ans += num;
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    int result = viralAdvertising(n);
    cout << result << endl;
    return 0;
}

