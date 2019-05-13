#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int Atemp[7];
	int Btemp[7];
	int Ctemp[7];
	
	for (int i = 0; i < 7; i++)
	{
  cout << "Province A, Day " << i + 1 << ": ";
  cin >> Atemp[i];
	}
		for (int i = 0; i < 7; i++)
	{
  cout << "Province B, Day " << i + 1 << ": ";
  cin >> Btemp[i];
	}
		for (int i = 0; i < 7; i++)
	{
  cout << "Province C, Day " << i + 1 << ": ";
  cin >> Ctemp[i];
	}
	
 	cout << "\nDisplaying Values: \n";
 	
 	for (int i = 0; i < 7; i ++)
 	{
 		cout << "Province A, Day " << i +1 << " = " << Atemp[i] << endl; 
 		
	}
	for (int i = 0; i < 7; i ++)
 	{
 		cout << "Province B, Day " << i +1 << " = " << Btemp[i] << endl; 
 		
	}
	for (int i = 0; i < 7; i ++)
 	{
 		cout << "Province C, Day " << i +1 << " = " << Ctemp[i] << endl; 
 		
	}
	
	getch ();
	return 0;
	
}
