#include <iostream>
#include <ctime>
 
using namespace std;
const int MAX = 3;

long unsigned * fibonacci()
{
	static long unsigned balances[100];

	for(int i = 0; i < 100; i++)
	{
		if (i < 1)
		{
			balances[i] = i;
		}
		else if (i == 1)
		{
			balances[i] = 1;
		}
		else
		{
			balances[i] = balances[i - 1] + balances[i - 2];
		}
	}
	return balances;
}
int * arrPointer()
{
	static int arr[10];
	char name[8] = {'p', 'o', 'i', 'n', 't', 'e', 'r', '\0'};
	char surname[9] = "location";
	int *ptr;

	ptr = arr;
	for(int i = 0; i < 10; i++)
	{
		if(&arr[i] == ptr + i)
		{
			cout << name << " " << surname<< endl;
			cout << &arr[i] << "\n"<< endl;
			cout << ptr + i << "\n" << endl;
		}
	}
	return 0;
}

int arrOfPointers()
{
	int var[MAX] = {10, 100, 200};
	int *ptr[MAX];
 	
 	for (int i = 0; i < MAX; i++) {
  	ptr[i] = &var[i]; // assign the address of integer.
	}
   
  for (int i = 0; i < MAX; i++) {
  	cout << "Value of var[" << i << "] = ";
  	cout << *ptr[i] << endl;
  	cout << &ptr[i] << " " << &var[i] << endl;
  }
  return 0;
}

int main()
{
	int position;
	long unsigned *arrBalances;
	arrPointer();
	arrOfPointers();
	arrBalances = fibonacci();
	cout << "Which fibonacci number You want to see?" << endl;
	cin >> position;
	if (position < 100 && position > 0)
	{
		cout << "fibonacci number at position " << position << ": " << arrBalances[position] << endl;
	}
	else
	{
		cout << "Number out of range!" << endl;
	}
	return 0;
}