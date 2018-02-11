#include <bits/stdc++.h>

using namespace std;

int findDigits(int n) {
    // Complete this function
     int count = 0, val =n;
    while(val > 0){
        int num = val%10;
        val = val/10;
        if(num == 0){
            continue;
        }
        else if(n%num == 0){
            count++;
        }
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        int result = findDigits(n);
        cout << result << endl;
    }
    return 0;
}

