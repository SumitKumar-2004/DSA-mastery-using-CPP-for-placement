#include <bits/stdc++.h>
using namespace std;
int main()
{
   int days, year, months, day;
   cout << "Enter number of days : ";
   cin >> days;
   year = days / 365;
   int remaining = days % 365;
   months = remaining / 30;
   day = remaining % 30;
   cout << "Years : " << year << " Months : " << months << " Days : " << day;
}