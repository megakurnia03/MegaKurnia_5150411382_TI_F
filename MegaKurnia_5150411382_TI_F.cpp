#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;



int main()
{
cout<<endl;
cout<<"Nama			: Mega Kurnia Maulidina "<<endl;
cout<<"NIM			: 5150411382 "<<endl;
cout<<"Kelas			: TI / F"<<endl;
cout<<"Mata Kuliah		: Struktur Data"<<endl;
cout<<endl;
	
int ordo=0;

cout<<"Masukan Panjang Matriks : ";
cin>>ordo;
cout<<endl;

int a[ordo][ordo];

for(int i=0;i<ordo;i++)
{
	for(int j=0;j<ordo;j++)
	{
		cout<<"masukan nilai ordo ["<<i+1<<"] ["<<j+1<<"] : ";
		cin>>a[i][j];
	}
}
cout<<endl;

for(int i=0;i<ordo;i++)
{
	for(int j=0;j<ordo;j++)
	{
		cout<<a[i][j]<<" ";
	}
	cout<<endl;
}
cout<<endl;

int c=ordo-1;
for(int i=0;i<ordo;i++)
{
	 
	for(int j=0;j<ordo;j++)
	{
		if(j==c)
		{
			a[i][j]=0;
		}
		cout<<a[i][j]<<" ";	
	}
	c--;
	cout<<endl;
}
}

