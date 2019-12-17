#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Unesi cijeli broj veci od 2 i manji od 100: "<<endl;
	cin>>n;
	int a[n][n];
	int brojac=0;
	for(int i=0;i<n;i++){
		for(int b=0;b<n;b++){
			brojac++;
			a[i][b]=brojac;
		}

	}
	int zbroj=0;
	for(int i=0;i<n;i++){
		zbroj=a[i][i]+zbroj;
	}
	cout<<"Zbroj iznosi: "<<zbroj<<endl;
	
	system("Pause");
	return 0;
}
