#include <iostream>

using namespace std;

main()
{
double number;
double bytes;
double kilobytes;
double megabytes;

cout << "Enter the bits : ";
cin >> number;

bytes = number / 8;
kilobytes = bytes / 1024;
megabytes = kilobytes / 1024;

cout << bytes << " bytes" << endl;
cout << kilobytes << " kilobytes" << endl;
cout << megabytes << " megabytes";
}