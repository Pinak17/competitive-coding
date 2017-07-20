#include <iostream>

using namespace std;


void prime2(int, int);
int main(){
        int n1,n2,i,test;
        cin>>test;
        while(test--) {
                cin>>n1>>n2;
                prime2(n1, n2);
                cout<<endl;
        }
        return 0;
}

void prime2(int n1, int n2){
	    int arr[1000000] = {0};
    for (int i = 2; i <= n2; i++)
    {
        for (int j = i * i; j <= n2; j+=i)
        {
            arr[j - 1] = 1;
        }
    }
    for (int i = n1; i <= n2; i++){
        if (arr[i - 1] == 0 && i>1)
            cout << i << endl;
    }
}
