#include<iostream>

using namespace std;

void findMax(){
	int N,i;
cin>>N;
int maxVal=-1e9;

for (i=0;i<N;i++){
	int x;
	cin>>x;
	
	if(x>>maxVal){
		maxVal = x;
	}
}
cout<<maxVal<<endl;
}
