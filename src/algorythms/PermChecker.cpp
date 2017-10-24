#include <iostream>
#include <vector>
#include <iterator>
#include <set>
#include <stdlib.h>

using namespace std;

int arr1[5] = {2,5,3,4,1}, arr2[4] = {5,1,2,3}, arr3[4]={3,2,3,1};
int solution(vector<int> &A);

int main()
{
	int number;
	int result;
	int arrSize;
	int *ptr;
	vector<int> A;
	string text;
	
	cout << "Chouse array: " << endl;
	cin >> number;
	switch(number)
	{
		case 1 : 
		ptr = arr1;
		arrSize = sizeof(arr1)/sizeof(*arr1);
		break;
		case 2 : 
		ptr = arr2;
		arrSize = sizeof(arr2)/sizeof(*arr2);
		break;
		case 3 : 
		ptr = arr3;
		arrSize = sizeof(arr3)/sizeof(*arr3);
		break; 
	}
	for(int iter = 0; iter < arrSize; iter++)
	{
		A.push_back(ptr[iter]);
	}
	result = solution(A);
	result == 1 ? text = "Array is a permutation" : text = "Array isn\'t a permutation";
	cout << text << endl;
	return 0;
}

int solution(vector<int> &A)
{
	set<int> S;
	set<int>::iterator it = S.begin();
	for (int i = 0; i < A.size(); i++)
	{
		S.insert(A[i]);
	}
	advance(it, S.size());
	if(S.size() == A.size() && S.size() == *it)
	{
		return 1;
	}
	return 0;
}