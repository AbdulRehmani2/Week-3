#include <iostream>

using namespace std;

main()
{
int num;
int digit;
int result;

cout << "Enter the number : ";
cin >> num;

digit = num%10;
result = digit;
num = num/10;

digit = num%10;
result = result + digit;
num = num/10;

digit = num%10;
result = result + digit;
num = num/10;

digit = num%10;
result = result + digit;
num = num/10;

digit = num%10;
result = result + digit;
num = num/10;

digit = num%10;
result = result + digit;
num = num/10;

digit = num%10;
result = result + digit;
num = num/10;

digit = num%10;
result = result + digit;
cout << "The sum is " << result;
}