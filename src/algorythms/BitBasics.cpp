#include <iostream>

using namespace std;

extern int sumator(int, int);
extern void swap(int &x, int &y);
 
int main () {
   static int value01;
   static int value02;
   static int sum;

   static int *value01Address = &value01;
   static int *value02Address = &value02;
   // get value
   cout << "place first value and hit enter :" << endl;
   cin >> value01;
   cout << "place second value and hit enter :" << endl;
   cin >> value02;
   cout << "We have two values: " << value01 << " and " << value02 << endl;

   value01 <<= 2;
   value02 <<= 8;

   cout << "bit operation for first value is : " << value01 << "\n" << endl;
   cout << "bit operation for second value is : " << value02 << "\n" << endl;

   value01 >>= 2;
   value02 >>= 8;

   cout << "bit operation for first value is : " << value01 << "\n" << endl;
   cout << "bit operation for second value is : " << value02 << "\n" << endl;

   value01 = ~value01;
   value02 = ~value02;

   cout << "bit operation for first value is : " << value01 << "\n" << endl;
   cout << "bit operation for second value is : " << value02 << "\n" << endl;

   cout << "bit operation for first value is : " << value01Address  << "\n" << endl;
   cout << "bit operation for second value is : " << value02Address << "\n" << endl;

   sum = sumator(value01, value02);
   cout << "sum of values is: " << sum << endl;

   cout << "value on : " << value01 << " value two : " << value02 << endl;
   swap(value01, value02);
   cout << "value on : " << value01 << " value two : " << value02 << endl;

   return 0;
}