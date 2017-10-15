// calculate binnary gap of given number
#include <iostream>

int solution(int N);

int main()
{
	int num1;
	int solved;
	std::cout << "set the value to be checked" << std::endl;
	std::cin >> num1;
	solved = solution(num1);
	std::cout << " " << std::endl;
	std::cout << "binary gap: "<< solved << std::endl;
}

int solution(int N)
{
	int counter = 0;
	int gap = 0;
	bool readyToCount = false;

	for (int i = ((sizeof(N) * 8) -1); i >= 0; i--)
	{
		std::cout << (N >> i & 1);
  	if(N >> i & 1)
  	{
  		readyToCount = true;
  		if(gap < counter)
  		{
  			gap = counter;
  		}
  		counter = 0;
  	}
  	else if(readyToCount)
  	{
  		counter++;
  	}
	}
	return gap; 
}