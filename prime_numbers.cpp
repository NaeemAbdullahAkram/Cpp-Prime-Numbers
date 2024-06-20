#include <iostream>
#include <cmath>

using namespace std;

bool pierwsza(int a)
{
	if(a<2) return false;
	for(int i=2; i<=sqrt(a); i++)
	{
		if(a%i==0) return false;
	}
	return true;
}

int main()
{	
	int ile=0, x=0, how_m=0;
	
	cin >> ile;
	int *a = new int[ile];
	int *b = new int[ile];

	for(int i=0; i<ile; i++)
	{
		cin >> a[i];
		cin >> b[i];

		how_m = how_m + (b[i]-a[i]+1);	
	}

	int *pierwsze = new int[how_m];

	for(int i=0; i<ile; i++)
	{
		for(int c=a[i]; c<=b[i]; c++)
		{
			if(pierwsza(c)==true) {pierwsze[x]=c; x++;}
		}
		pierwsze[x]=0; x++;
	}	

	int *ind = pierwsze;

	for(int i=0; i<ile; i++)
	{
		while(*ind)
		{
			cout << *ind << endl;
			ind++;
		}
		ind++;
		cout << endl;
	}

	delete [] a;
	delete [] b;
	delete [] pierwsze;
	
	return 0;
}