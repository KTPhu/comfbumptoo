#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "Calculating the Heat Capcity of a Substance using the fomrula Q=mCdelta_T" << endl <<std::endl;
  double m;
  cout << "Enter a value for Mass (M) in grams: ";
  cin >> m;

    double C;
  cout << "Enter a value for Heat Capacity (C): " ; 
  cin >> C;


   double delta_T;
  cout << "Enter a value for the change in Temperature (delta_T): " ; 
 
  cin >> delta_T;
  
    std::cout <<std::fixed << std::setprecision(3);
  std::cout << "The Heat Energy (Q) is: " << (C * delta_T * m)/1000 << " kJ." << endl;
  if (C * delta_T * m > 0) {
    std::cout << "The reaction is endothermic." << endl;
  } else if (C * delta_T * m < 0) {
    std::cout << "The reaction is exothermic." << endl << endl <<endl;
  }
  

  return 0;
}

