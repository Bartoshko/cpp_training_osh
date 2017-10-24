#include <iostream>
#include <vector>
#include <stdlib.h>
#include <set>

using namespace std;

int arr1[28] = {2, 3, 1, 5, 4, 7, 6, 9, 8, 19, 11, 10, 12, 18, 13, 17, 16, 14, 15, 20, 21, 29, 27, 26, 23, 22, 28, 24};
vector<int> A;
int solution(vector<int> &A);

int main()
{
	int result;
	for(int i = 0; i < (sizeof(arr1) / sizeof(*arr1)); i++)
	{
		A.push_back(arr1[i]);
	}
	result = solution(A);
	cout << "Missing element is: " << result << endl;
	return 0;
}

int solution(vector<int> &A)
{
	set<int> S_set;
	set<int>::iterator it;
	for (int j = 0; j < A.size(); j++)
	{
		S_set.insert(A[j]);
	}
	int k = 1;
	int lackingValue;
	for (it = S_set.begin(); it != S_set.end(); it++)
	{
		if (*it != k)
		{
			lackingValue = k;
			cout << "missing value" << "\n";
			k++;
		} 
		cout << *it << "\n";
		k++;
	}
	return lackingValue;
}
