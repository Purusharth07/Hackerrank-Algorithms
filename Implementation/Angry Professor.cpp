#include <bits/stdc++.h>

using namespace std;

string angryProfessor(int k, vector <int> a) {
    // Complete this function
    int count=0; string answer;
    sort(a.begin(), a.end());
    for(int j = 0; j< a.size(); j++){
        if(a[j] <=0){
            count++;
        }
    }
    if(count >= k){
        answer = "NO";
    }
    else{
        answer = "YES";
    }
    return answer;
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        cin >> n >> k;
        vector<int> a(n);
        for(int a_i = 0; a_i < n; a_i++){
           cin >> a[a_i];
        }
        string result = angryProfessor(k, a);
        cout << result << endl;
    }
    return 0;
}

