#include <bits/stdc++.h>

using namespace std;

int beautifulDays(int i, int j, int k) {
    // Complete this function
    int count = 0; int val; int num;
    for(int a = i; a <= j ; a++){
        num = a;
        string str = to_string(num);
        reverse(str.begin(), str.end());
        val = stoi(str);
        if(abs(a - val)%k ==0 ){
            count++;
        }
    }
    return count;
}

int main() {
    int i;
    int j;
    int k;
    cin >> i >> j >> k;
    int result = beautifulDays(i, j, k);
    cout << result << endl;
    return 0;
}

