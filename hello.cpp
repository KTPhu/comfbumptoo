#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string userInput;
    while (true) {
        cout << "Calculating the Heat Capcity of a Substance using the fomrula Q=mCdelta_T" << endl <<std::endl;
        std::cout << "What are you solving for" <<endl;
        cin>>userInput;
        if (userInput == "1") {
            continue;
        }
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
        cout << "Enter "1" to restart the program, or anything else to exit: ";
        string choice;
        cin >> choice;
        if (choice != "1") {
            break;
        }
    } else if (userInput == "m") {

double q;
  cout << "Enter a value for heat in joules";
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
        cout << "Enter 1 to restart the program, or anything else to exit: ";
        string choice;
        cin >> choice;
        if (choice != "1") {
            break;
        }
  } else if (userInput == "c") {
double q;
  cout << "Enter a value for heat";
  cin >> q;

    double m;
  cout << "Enter a value for Mass (M) in grams: ";
  cin >> m;

   double delta_T;
  cout << "Enter a value for the change in Temperature (delta_T): " ; 
 
  cin >> delta_T;
  
    std::cout <<std::fixed << std::setprecision(3);
  std::cout << "The Heat Capacity (C) is: " << (q/(m *delta_T)) << " J/g°C." << endl;
  if ((q/(m*delta_T)) > 0) {
    std::cout << "The reaction is endothermic." << endl;
  } else if ((q/(m*delta_T)) < 0) {
    std::cout << "The reaction is exothermic." << endl << endl <<endl;
  }
        cout << "Enter 1 to restart the program, or anything else to exit: ";
        string choice;
        cin >> choice;
        if (choice != "1") {
            break;
        }
  
    } else if (userInput == "delta_T") {
    double q;
  cout << "Enter a value for heat";
  cin >> q;

    double m;
  cout << "Enter a value for Mass (M) in grams: ";
  cin >> m;

   double c;
  cout << "Enter a value for Heat Capacity (C): " ; 
 
  cin >> c;
  
    std::cout <<std::fixed << std::setprecision(3);
  std::cout << "The change in Temperature (delta_T) is: " << (q/(m *c)) << " °C." << endl;
  if ((q/(m*c)) > 0) {
    std::cout << "The reaction is endothermic." << endl;
  } else if ((q/(m*c)) < 0) {
    std::cout << "The reaction is exothermic." << endl << endl <<endl;
  }
        cout << "Enter 1 to restart the program, or anything else to exit: ";
        string choice;
        cin >> choice;
        if (choice != "1") {
            break;
        }
  
    } else{
     std::cout << "Invalid input. Please enter 'q', 'm', 'c', 'delta_T', or '1' to restart." << endl; cin>>userInput;
  }
    }
}

