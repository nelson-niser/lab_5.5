#include<iostream>
using namespace std;
int main(){

for(int i=0;i<5;i++){
	
	for(int j=0;j<(4-i);j++){
		cout<<" ";}
	if(i==0 or i==4){
	for(int j=0;j<5;j++){
		cout<<"*";}
	
	cout<<endl;}
	else{
	for(int j=0;j<5;j++){
		if(j==0 or j==4){
		cout<<"*";}
		else{
		cout<<" ";}}
	cout<<endl;}


}

return 0;
}
