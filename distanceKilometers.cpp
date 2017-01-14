/* Aleksandr Movsesyan
     Programming Lab 1
     pl1.cpp
     CS 110A
     Craig Persiko

     Converts miles into kilometers and loops as long as user wants
  */

#include <iostream>
using namespace std;

int main()
{
  int num_decimals_after_decimal;
  double num_kilometers, num_miles;
  const double KM_PER_MI = 1.6093;
  char cont;

  cout << "\nWelcome to the Converter 3000. I Convert miles into kilometers.\n";

  do
  {
    do
    {
      cout << "\nPlease enter the number of miles you would like to covert:  ";
      cin >> num_miles;
      if ( num_miles <= 0 )
      {
        cout << "Error 13: Invalid number. The number must be positive!!\n";
      }
    }while ( num_miles <= 0 );

    do
    {
      num_kilometers = num_miles / KM_PER_MI;
      cout << "\nHow many digits do you want shown after the decimal point:  ";
      cin >> num_decimals_after_decimal;
      if ( num_decimals_after_decimal < 0 )
      {
        cout << "Error 7: Number of digits after a decimal must be a positive
number\n";
      }
    }while ( num_decimals_after_decimal < 0 );

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(num_decimals_after_decimal);

    cout << "\nThere are " << num_kilometers << " kilometers in " << num_miles
<< " miles.\n";
    cout << "\nWould you like to convert another distance??\n"
         << "Press y for yes and n for no and then hit return:  ";
    cin >> cont;

     if ( cont != 'y' && cont != 'Y' && cont != 'n' && cont != 'N' )
     {
       do
       {
          cout  << "Press y for yes and n for no and then hit return:  ";
          cin >> cont;
       }while ( cont != 'y' && cont != 'Y' && cont != 'n' && cont != 'N' );
     }
  }while ( (cont == 'y') || (cont == 'Y') );

  cout << "\nThank you for useing the Coverter 3000. Please come again. I
enjoyed converting you numbers.\n\n";

  return 0;
}


