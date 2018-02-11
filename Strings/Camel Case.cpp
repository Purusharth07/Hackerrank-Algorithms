#include <bits/stdc++.h>

using namespace std;

int camelcase(string s) {
    // Complete this function
    int value = s.length(); int count =1;
    for(int i =0; i < value ; i++){
        if(isupper(s[i])){
            count++;
        }
    }
    return count++;
}

int main() {
    string s;
    cin >> s;
    int result = camelcase(s);
    cout << result << endl;
    return 0;
}

