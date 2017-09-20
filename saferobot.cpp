#include <iostream>
#include <string>

int safetyRobot(int, int);
void printMessage(int);

using namespace std;

int main(){
	int test,flag=0;
	cin>>test;
	while(test--){
		int row,col;
		cin>>row>>col;
		flag=safetyRobot(row,col);
		printMessage(flag);
	}
	return 0;
}

int safetyRobot(int row, int col){
	int lrSafe=0,upSafe=0;
	string inst;
	cin>>inst;
	for(int i=0;i<inst.length();i++){
		//cout<<"---"<<inst[i]<<"---"<<endl;	
		if(inst[i] == 'L'){
			lrSafe=lrSafe-1;
			if(lrSafe>(col-1) || lrSafe<(-col+1)){
				return 1;
			}
		}	
		else if(inst[i] == 'R'){
			lrSafe=lrSafe+1;
			//cout<<"--"<<lrSafe<<"--"<<endl;
			if(lrSafe>(col-1) || lrSafe<(-col+1)){
				return 1;
			}
		}
		else if(inst[i] == 'U'){
			upSafe=upSafe+1;
			if(upSafe>(row-1) || upSafe<(-row+1)){
				return 1;
			}
		}
		else if(inst[i] == 'D'){
			upSafe=upSafe-1;
			if(upSafe>(row-1) || upSafe<(-row+1)){
				return 1;
			}
		}
	}
	return 0;
}	

void printMessage(int flag){
	if(flag == 0){
		cout<<"safe"<<endl;
	} else {
		cout<<"unsafe"<<endl;
	}
}
