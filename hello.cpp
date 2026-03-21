#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "Calculating the Heat Capcity of a Substance using the fomrula Q=mCdelta_T" << endl <<std::endl;
  std::string userInput;
  std::cout << "What are you solving for";
    if(userInput=="q"){
    double m;
  cout << "Enter a value for Mass (M) in grams: ";
  cin >> m;

    double c;
  cout << "Enter a value for Heat Capacity (C): " ; 
  cin >> c;


   double delta_T;
  cout << "Enter a value for the change in Temperature (delta_T): " ; 
 
  cin >> delta_T;
  
    std::cout <<std::fixed << std::setprecision(3);
  std::cout << "The Heat Energy (Q) is: " << (c * delta_T * m)/1000 << " kJ." << endl;
  if (c * delta_T * m > 0) {
    std::cout << "The reaction is endothermic." << endl;
  } else if (c * delta_T * m < 0) {
    std::cout << "The reaction is exothermic." << endl << endl <<endl;
  }
  
    } else if (userInput == "m") {

double q;
  cout << "Enter a value for heat";
  cin >> q;

    double c;
  cout << "Enter a value for Heat Capacity (C): " ; 
  cin >> c;


   double delta_T;
  cout << "Enter a value for the change in Temperature (delta_T): " ; 
 
  cin >> delta_T;
  
    std::cout <<std::fixed << std::setprecision(3);
  std::cout << "The Mass (M) is: " << (q/(c *delta_T))/1000 << " g." << endl;
  if ((q/(c*delta_T))/1000 > 0) {
    std::cout << "The reaction is endothermic." << endl;
  } else if ((q/(c*delta_T))/1000 < 0) {
    std::cout << "The reaction is exothermic." << endl << endl <<endl;
  }



    }
  
    
  return 0;
}

