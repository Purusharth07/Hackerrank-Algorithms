#include <bits/stdc++.h>

using namespace std;

string funnyString(string s){
    // Complete this function
    string rev = s;
    reverse(rev.begin(), rev.end());
    string ans; int count = 0;
    for(int i = 1; i< s.size(); i++){
        if(abs(s[i]-s[i-1]) == abs(rev[i]-rev[i-1])){
            count++;
        }
    }
    if(count == s.size()-1){
        ans = "Funny";
    }
    else{
        ans = "Not Funny";
    }
    return ans;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        string result = funnyString(s);
        cout << result << endl;
    }
    return 0;
}

