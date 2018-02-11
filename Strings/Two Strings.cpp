#include <bits/stdc++.h>

using namespace std;

string twoStrings(string s1, string s2){
    // Complete this function
    string ans; int flag =0;
    for(int i = 0; i< s1.length(); i++){
        for( int j = 0; j< s2.length(); j++){
            if(s1[i]==s2[j]){
                ans = "YES";
                flag =1;
                break;
            }
        }
    }
    if(flag == 0){
        ans = "NO";
    }
    return ans;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s1;
        cin >> s1;
        string s2;
        cin >> s2;
        string result = twoStrings(s1, s2);
        cout << result << endl;
    }
    return 0;
}

