#include <iostream>
#include <vector>
#include <set>

using namespace std;

static int setA[7] = {9, 3, 9, 3, 9, 7, 9};
static int setB[10] = {9, 3, 9, 3, 9, 7, 9, 9, 7, 8};
static int setC[8] = {4 ,9, 3, 9, 3, 9, 7, 9};
static int setD[9] = {9, 3, 1, 9, 3, 7, 9, 7, 9};

int solution(vector<int> &A);

int main()
{
	vector<int> A; 
	int result;

	for (int i = 0; i < (sizeof(setB) / sizeof(*setB)); ++i)
	{
		A.push_back(setB[i]);
	}

	result = solution(A);

	cout << "result: " << result << endl;
	return 0;
}

int solution(vector<int> &A)
{
	set<int> holder;
	for(int j = 0; j < (A.size()); j++)
	{
		if(holder.find(A[j]) == holder.end())
		{
			holder.insert(A[j]);
		}
		else
		{
			holder.erase(A[j]);
		}
	}
	return *holder.begin();
}