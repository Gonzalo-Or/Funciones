#include<iostream>
#include<cstdlib>

using namespace std;

void suma(int a, int b);

int main ()
{
	int N1, N2;
	cout<<"introduzca el valor del primer operando"<<endl;
	cin>>N1;
	cout<<"introduzca el valor del segundo operando"<<endl;
	cin>>N2;
	suma(N1,N2);
	return 0;
}

void suma(int a, int b)
{
	int c=a+b;
	cout<<"El valor de "<<a<<" + "<<b<<" es: "<<c<<endl;
}
