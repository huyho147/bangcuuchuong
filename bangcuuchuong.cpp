#include <iostream>
using namespace std;
int main()
{

	cout << "Hien bang cuu chuong\n";
	
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++) 
		{
			int so = i * j;
			cout << j << " * " << i << " = " << so << "|";
		}
		cout << endl ;
	}
}