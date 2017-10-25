#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int arr[] = {1, 4, 1, 2, 5};
int solution(vector<int> &A);

int main()
{
   int result;
   vector<int> A (arr, arr + (sizeof(arr) / sizeof(*arr)));
   result = solution(A);
   cout << "missing element is " << result << endl;
}

struct Increasing {
    bool operator() (int i, int j)
    {
        return (i<j);
    }
} increasing;

int solution(vector<int> &A)
{
    sort(A.begin(), A.end(), increasing);
    cout << A[A.size()-1] << " is a last member " << endl;
    if(A[A.size()-1] < 0)
    {
        return 1;
    }
    else
    {
        for(int i = 0; i < A.size() - 1; i++)
        {
            if(A[i + 1] != A[i] + 1 && A[i + 1] != A[i])
            {
                return A[i] + 1;
            }
        }
    }
    return A[A.size() - 1] + 1;
}
