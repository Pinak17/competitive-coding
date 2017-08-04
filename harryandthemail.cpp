#include <bits/stdc++.h>

using namespace std;

string isValid(string email) {
    // Complete this function
    if(email.length() != 18){
        return "No";
    }
    if(email[5] != '@'){
        return "No";
    }
    string sent = "hogwarts.com";
    for(int i=0;i<5;i++){
        if(email[i]<'a' || email[i]>'z'){
            return "No";
        }
    }
    for(int i=0;i<12;i++){
        if(email[6+i] != sent[i]){            
            return "No";
        }
    }
    return "Yes";
}

int main() {
    string s;
    cin >> s;
    string result = isValid(s);
    cout << result << endl;
    return 0;
}