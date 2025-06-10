/******************************************************************************
# Author:            Ari Pollack and Xavier Braker
# Lab:               Discussion 9
# Date:              June 10, 2025
# Description:       This program will read three integers and output their
                     reversed values.
# Input:             num1 (int), num2 (int), num3 (int)
# Output:            rum1 (int), rum2 (int), rum3 (int), num1 (int), num2
                     (int), num3 (int)
# Sources:           Discussion 9 specifications, Stack Overflow
#*****************************************************************************/

#include <iostream>
#include <string>
using namespace std;

// Declare core functions, which are defined after main()
int reverseDigit(int num1);
void reverseDigit(int& num2, int& num3);

int main() {
   // Declare variables for input and output
   int num1 = 0;
   int num2 = 0;
   int num3 = 0;
   int rum1 = 0;
   int rum2 = 0;
   int rum3 = 0;

   // Get input
   cout << "Enter an integer: ";
   cin >> num1;
   cout << "Enter two integers: ";
   cin >> num2 >> num3;
   cout << endl;

   // Perform calculations
   rum1 = num1;
   rum2 = num2;
   rum3 = num3;
   rum1 = reverseDigit(rum1);
   reverseDigit(rum2, rum3);

   // Display the results
   cout << "The value of reverseDigit(" << num1 << ") is " << rum1 << endl;
   cout << "The value of reverseDigit(" << num2 << ", " << num3 << ") is " << rum2 << ", " << rum3 << endl;
   return 0;
}

// Define core functions
int reverseDigit(int num1) {
   // Declare variables for calculation
   int num = 0;
   string temp1 = "";
   string temp2 = "";
   int length = 0;

   // Perform calculations
   temp1 = to_string(num1);
   length = temp1.length();
   for (int i = length - 1; i >= 0; i--) {
      temp2 += temp1[i];
   }
   num = stoi(temp2);
   return num;
}

void reverseDigit(int& num2, int& num3) {
   // Declare variables for calculation
   string temp1 = "";
   string temp2 = "";
   int length = 0;

   // Perform calculations
   temp1 = to_string(num2);
   length = temp1.length();
   for (int i = length - 1; i >= 0; i--) {
      temp2 += temp1[i];
   }
   num2 = stoi(temp2);

   temp1 = to_string(num3);
   temp2 = "";
   length = temp1.length();
   for (int i = length - 1; i >= 0; i--) {
      temp2 += temp1[i];
   }
   num3 = stoi(temp2);
}