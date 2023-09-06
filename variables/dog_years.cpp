#include <iostream>

int main() {
  int human_years;
  double dog_years;
  int early_years = 21;

  std::cout << "Enter your dog's age: ";
  std::cin >> dog_years;

  human_years = 21 + dog_years*4;
  std::cout << "Your dog's age in human years:" << human_years << "\n";

  return 0;

}
