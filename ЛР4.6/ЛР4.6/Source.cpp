#include <iostream>
#include <cmath>
using namespace std;
int main()
{     
	int j;
	int i;
	double P;
	double E;
	// 1 спосіб
	P = 1;
	j = 1;
	while (j <= 15)
	{
		E = 0;
		i = j;
		while (i <= j * j)
		{
			E += i * i;
			i++;
		}
		P *= sqrt(E);
		j++;
	}
	cout << P << endl;
	// 2 спосіб
	P = 1;
	j = 1;
	do
	{
		E = 0;
		i = j;
		do {
			E += i * i;
			i++;
		} while (i <= j * j);
		P *= sqrt(E);
		j++;
		
	} while (j <= 15);
	cout << P << endl;
	// 3 спосіб
	P = 1;
	for (j = 1; j <= 15; j++)
	{
		E = 0;
		for (i = j; i <= j * j; i++)
		{
			E += i * i;

		}
		P *= sqrt(E);
		
	}
	cout << P << endl; 
	// 4 спосіб
	P = 1;
	for (j = 15; j >= 1; j--)
	{
		E = 0;
		for (i = j*j; i >= j; i--)
		{
			E += i * i;

		}
		P *= sqrt(E);

	}
	cout << P << endl; 

	
	return 0;



}