#include <iostream>
#include <string>

using namespace std;

void numOfFruit(string);
void makeAHappy(int, int);
void makeBHappy(int, int);

int main(){
	int test;
	cin>>test;
	while(test--){
		string f;
		cin>>f;
		numOfFruit(f);
	}
	return 0;
}

void numOfFruit(string f){
	int na=0,nb=0,s;
	s=f.length();
	for(int i=0;i<s;i++){
		if(f[i] == 'a')
			na++;
		else if(f[i] == 'b')
			nb++;
	}
//	cout<<"apple : "<<na<<endl;
//	cout<<"banana : "<<nb<<endl;
	if(na>=nb){
		makeAHappy(na,nb);
        }else{
                makeBHappy(nb,na);
        }
//	makeHappy(na,nb);
	return;
}

void makeAHappy(int na,int nb){
	int x,y,cx=0,cy=0;
	cin>>x>>y;
	while(na>0 || nb>0){
		while(na>0 && cx<x){
			cout<<"a";
			na--;
			cx++;
//			cout<<"count : "<<cx<<endl;
			cy=0;
		}
		while(nb>0 && cy<y){
			cout<<"b";
			nb--;
			cy++;
			cx=0;
		}
		if(na>0 && cx == x){
			cout<<"*a";
			na--;
			cx=1;
			cy=0;
		}
		if(nb>0 && cy == y && na == 0){
			cout<<"*b";
			nb--;	
			cy=1;
			cx=0;
		}
	}
	cout<<""<<endl;
	return;
}

void makeBHappy(int nb,int na){
        int x,y,cx=0,cy=0;
        cin>>x>>y;
        while(na>0 || nb>0){
                while(nb>0 && cy<y){
                        cout<<"b";
                        nb--;
                        cy++;
//                      cout<<"count : "<<cx<<endl;
                        cx=0;
                }
                while(na>0 && cx<x){
                        cout<<"a";
                        na--;
                        cx++;
                        cy=0;
                }
                if(nb>0 && cy == y){
                        cout<<"*b";
                        nb--;
                        cy=1;
                        cx=0;
                }
                if(na>0 && cx == x && nb == 0){
                        cout<<"*a";
                        na--;
                        cx=1;
                        cy=0;
                }
        }
        cout<<""<<endl;
        return;
}

