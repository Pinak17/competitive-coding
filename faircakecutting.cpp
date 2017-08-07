#include <bits/stdc++.h>

using namespace std;

long howManyToInvite(long A, long B, long a) {
    // Return the number of people Leha should invite to his party
    return (a*B)/A;
}

int main() {
    long A;
    long B;
    long a;
    cin >> A >> B >> a;
    long b = howManyToInvite(A, B, a);
    cout << b << endl;
    return 0;
}
