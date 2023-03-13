#include <iostream>
#include <cmath>
using namespace std;

int main() {
   int binary, decimal = 0, base = 0;

   cout << "Enter a binary number: ";
   cin >> binary;

   while(binary != 0){
      int digit = binary % 10;
      decimal += digit * pow(2, base);
      binary /= 10;
      base++;
   }

   cout << "The decimal equivalent is: " << decimal << endl;
   return 0;
}
