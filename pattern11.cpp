#include<iostream>
using namespace std;
int main(){

for(int i=0;i<4;i++){

	for(int j=0;j<(4-i);j++){
	cout<<" ";
	}

	cout<<"*";

	for(int j=0;j<(i-1);j++){
	cout<<" ";
	}

	if(i!=0){
	cout<<"*";
	}


	cout<<endl;
}
	cout<<"*****"<<endl;
return 0;
}
