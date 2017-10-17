#include <iostream>
#include <vector>
#include <set>

using namespace std;

static int arr1[5] = {3, 8, 9, 7, 6};
static int K = 3;


vector<int> solution(vector<int> &A, int K);

int main()
{
	vector<int> A;
	vector<int> result;

	for(int i = 0; i < (sizeof(arr1) / sizeof(*arr1)); i++)
	{
		A.push_back(arr1[i]);
		cout << arr1[i] << endl;
	}
	result = solution(A, K);
	cout << "---------" << endl;
	for(int z = 0; z < (sizeof(arr1) / sizeof(*arr1)); z++)
	{
		cout << A[z] << endl;
	}

	return 0;
}

vector<int> solution(vector<int> &A, int K)
{
	int temp;
	int size = A.size();
	for(int j = 0; j < K; j++)
	{
		temp = A[0];
		for(int x = 0; x < size - 1; x++)
		{
			A[x] = A[x+1];
		}
		A[size - 1] = temp;
	}
	return A;
}
