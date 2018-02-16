#include <bits/stdc++.h>

using namespace std;

string hackerrankInString(string s) {
    // Complete this function
    int value = 0; string val = "hackerrank"; string ans;
    for(int i = 0; i < s.length(); i++){
        if(val[value] == s[i]){
            value++;
        }
    }
    if(val.length() == value){
        ans = "YES";
    }
    else{
        ans = "NO";
    }
    return ans;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        string result = hackerrankInString(s);
        cout << result << endl;
    }
    return 0;
}

