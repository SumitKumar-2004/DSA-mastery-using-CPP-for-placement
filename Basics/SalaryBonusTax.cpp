#include <iostream>
using namespace std;

int main()
{
   double salary;
   int experience;
   int rating;
   cin >> salary;
   cin >> experience;
   cin >> rating;
   double bonus = 0;
   // Experience based bonus
   if (experience >= 5)
   {
      bonus = salary * 0.20;
   }
   else
   {
      bonus = salary * 0.10;
   }

   // Performance bonus

   if (rating >= 4)
   {
      bonus += 5000;
   }

   double finalSalary = salary + bonus;

   double tax = 0;

   // Tax Calculation

   if (finalSalary <= 500000)
   {
      tax = finalSalary * 0.05;
   }
   else if (finalSalary <= 1000000)
   {
      tax = finalSalary * 0.10;
   }
   else
   {
      tax = finalSalary * 0.20;
   }

   double netSalary = finalSalary - tax;

   cout << "Bonus = " << bonus << endl;
   cout << "Final Salary = " << finalSalary << endl;
   cout << "Tax = " << tax << endl;
   cout << "Net Salary = " << netSalary << endl;

   return 0;
}