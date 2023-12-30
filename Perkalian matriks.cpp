#include <iostream>
using namespace std;
int main()
{
	int b,k,l;
	cout<<"Masukkan banyaknya baris A :"; cin>>b;
	cout<<"Masukkan banyaknya kolom A & baris B :"; cin>>k;
	cout<<"Masukkan kolom matriks B :"; cin>>l;
	
	double x[b][k];
	double y[k][l];
	
	cout<<endl;
	
	for (int i=0; i<b; i++)
	{
		for (int j=0; j<k; j++)
		{
			cout<<"Masukkan matrik A baris "<<i+1<<" kolom "<<j+1<<" :";
			cin>>x[i][j];
		}
	}
	
	cout<<endl;
		
	for (int i=0; i<k; i++)
	{
		for (int j=0; j<l; j++)
		{
			cout<<"Masukkan matrik B baris "<<i+1<<" kolom "<<j+1<<" :";
			cin>>y[i][j];
		}
	}
	
	cout<<endl;
	cout<<"Anggota matriks A adalah"<<endl;
	
	for (int i=0; i<b; i++)
	{
		for (int j=0; j<k; j++)
		{
			cout<<x[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<endl;
	cout<<"Anggota matriks B adalah"<<endl;
	
	for (int i=0; i<k; i++)
	{
		for (int j=0; j<l; j++)
		{
			cout<<y[i][j]<<" ";
		}
		cout<<endl;
	}
	
	double a[b][l];
	for (int i=0; i<b; i++)
	{
		for( int j=0; j<l; j++)
		{
			int jml=0;
			for (int z=0; z<k; z++)
			{
				jml = jml + x[i][z]*y[z][j];
			}
			a[i][j]=jml;
		}
	}
	
	cout<<endl<<"Matriks perkalian A dan B adalah "<<endl;
	
	for (int i=0; i<b; i++)
	{
		for (int j=0; j<l; j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
