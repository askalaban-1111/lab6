#include <iostream>

using namespace std;

int groupPrice(int adults, int children, int adultPrice) {
   int childrenPrice = adultPrice / 2;
   int price = (adultPrice * adults) + (childrenPrice * children);
   return price;
}

int main() {
  cout << groupPrice(8, 12, 150) << endl;
}