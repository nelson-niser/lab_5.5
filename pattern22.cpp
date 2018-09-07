#include<iostream>
using namespace std;
int main(){

for(int i=0;i<9;i++){
	
	//writing " " before  *
	for(int j=0;j<(4-i);j++){
		cout<<" ";
	}
	for(int j=0;j<(i-4);j++){
		cout<<" ";
	}
	
	//writing *
	if(i<5){
		for(int j=1;j<(2*(i+1));j++){
		cout<<"*";}
	}
	else{
		for(int j=1;j<(2*(9-i));j++){
		cout<<"*";}
	}

cout<<endl;
}

return 0;
}
