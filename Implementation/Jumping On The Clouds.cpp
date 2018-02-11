#include <bits/stdc++.h>

using namespace std;

int jumpingOnClouds(vector <int> c, int k) {
    // Complete this function
    int value = 0, n = c.size();int energy = 100;int count =0;
    if(k == n){
        if(c[0]==0){
            energy -= 1;
        }
        else if(c[0]==1){
            energy -= 3;
        }
    }
    else{
    for(int i = 0; i < c.size(); i++){
        value += k ;
        if(c[value]==0){
            energy -= 1;
            count++;
        }
        else if(c[value] == 1){
            energy -= 3;
            count++;
        }
        if((k*(count+1))%n == 0){
             if(c[0]==0){
                 energy -= 1;
             }
            else if(c[0]==1){
                energy -= 3;
            }
            break;
        }
    } }
    return energy;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> c(n);
    for(int c_i = 0; c_i < n; c_i++){
       cin >> c[c_i];
    }
    int result = jumpingOnClouds(c, k);
    cout << result << endl;
    return 0;
}

