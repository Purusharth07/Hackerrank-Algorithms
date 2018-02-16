#include <bits/stdc++.h>

using namespace std;

int marsExploration(string s) {
    // Complete this function
    int value =0;
    for(int i =1; i<= s.length(); i++){
        if(i%3 == 1){
            if(s[i-1] != 'S'){
                value++;
            }
        }
        else if(i%3 == 2){
            if(s[i-1] != 'O'){
                value++;
            }
        }
        else if(i%3 == 0){
            if(s[i-1] != 'S'){
                value++;
            }
        }
    }
    return value;
}

int main() {
    string s;
    cin >> s;
    int result = marsExploration(s);
    cout << result << endl;
    return 0;
}

