// Sales prediction
#include <iostream>

int main(){
 const int TOTAL = 2103419277;
 const double PERCENT = 0.18;
 //finding the percent by which sales have increased in 2019
 long prediction = (TOTAL * PERCENT) + TOTAL;

 std::cout << "Last year's sales were $" << TOTAL << std::endl;
 std::cout << "this years sales prediction $" << prediction << std::endl;

}
