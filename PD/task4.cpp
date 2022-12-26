#include <iostream>

using namespace std;

main()
{
string name;
int subject1;
int subject2;
int subject3;
int subject4;
int subject5;
float sum;
float percentage;
cout << "Enter name : ";
cin >> name;
cout << "Enter subject01 marks : ";
cin >> subject1;
cout << "Enter subject02 marks : ";
cin >> subject2;
cout << "Enter subject03 marks : ";
cin >> subject3;
cout << "Enter subject04 marks : ";
cin >> subject4;
cout << "Enter subject05 marks : ";
cin >> subject5;
sum = subject1 + subject2 + subject3 + subject4 + subject5;
percentage = (sum/500) * 100;
cout << "The percentage is : " << percentage;
}