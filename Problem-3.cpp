#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
	int i, j, n, temp;
	char arr[30];
	cout << "Enter the number of characters to be sorted: " << flush;
	cin >> n;
	
	for (i=0;i<n;i++)
	{
		cin >> arr[i];
		cout << arr[i] << ", ";
	}
	
	cout << endl<<endl;
	for (i=0;i<n;i++)
	{
		for (j=0;j<n-1;j++)
		{
			if (arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
			
		}
		
	}
	
	cout << "The array elements after sorting is: ";
	for (i=0;i<n;i++)
	{
		cout << arr[i];
	}
	
	cout << "\nThe size of the array is: " << n;
	
	getch();
	return 0;
	
	
}
