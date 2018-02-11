#include <bits/stdc++.h>

using namespace std;

int migratoryBirds(int n, vector <int> ar) {
    // Complete this function
    int value = 0;
    int typ1 = 0, typ2 = 0, typ3 = 0, typ4 = 0, typ5 = 0;
    for(int i = 0 ; i < ar.size(); i++){
        if(ar[i] == 1){
            typ1++;
        }
        else if(ar[i] == 2){
            typ2++;
        }
        else if(ar[i] == 3){
            typ3++;
        }
        else if(ar[i] == 4){
            typ4++;
        }
        else if(ar[i] == 5){
            typ5++;
        }
    }
    int var1 = max(typ1, typ2);
    int var2 = max(typ3, typ4);
    int var3 = typ5;
    int var4 = max(var1, var2);
    int var5 = max(var3, var4);
    if(var5 == typ1){
        value = 1;
    }
    else if(var5 == typ2){
        value = 2;
    }
    else if(var5 == typ3){
        value = 3;
    }
    else if(var5 == typ4){
        value = 4;
    }
    else if(var5 == typ5){
        value = 5;
    }
    return value;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = migratoryBirds(n, ar);
    cout << result << endl;
    return 0;
}

