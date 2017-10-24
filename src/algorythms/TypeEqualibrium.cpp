#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

int arr1[5] = {3, 1, 2, 4, 3};
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
	cout << "The Equlaibrume min differance is: " << result << endl;
	return 0;
}

int solution(vector<int> &A)
{
	int differ = 0;
	int minDiffer = 0;
	int left = 0;
	int right;
	for (int j = 0; j < A.size() - 1; j++)
	{
		left += A[j];
		right = 0;
		for (int k = j + 1; k < A.size(); k++)
		{
			right += A[k];
		}
		differ = abs(left - right);
		if(j == 0 || differ < minDiffer)
		{
			minDiffer = differ;
		}
	}
	return minDiffer;
}