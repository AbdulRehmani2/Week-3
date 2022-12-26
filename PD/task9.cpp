#include <iostream>

using namespace std;

main()
{
int num;
int result1;
int result2;
int result3;

int digit;
int total1;
int total2;
int total3;
int total4;
cout << "Enter the number : ";
cin >> num;

digit = num % 10;
total1 = digit;
result1 = num/10;

digit = result1 % 10;
total2 = total1 + digit;
result2 = result1/10;

digit = result2 % 10;
total3 = total2 + digit;
result3 = result2/10;

total4 = total3 + result3;

cout << "The sum of digits is : " << total4;


}