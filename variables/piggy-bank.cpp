#include <iostream>
#include <cmath>

int main() {
  double a;
  double b;
  double c;
  double x1;
  double x2;

  std::cout << "Enter a:\n";
  std::cin >> a;

  std::cout << "Enter b:\n";
  std::cin >> b;

  std::cout << "Enter c:\n";
  std::cin >> c;

  double delta = pow(b, 2) - 4*a*c; //49 - 84
  x1 = (-b + std::sqrt(delta))/ (2*a);
  x2 = (-b - std::sqrt(delta))/ (2*a);

  std::cout << "Root 1 is " << x1 << "\n";
  std::cout << "Root 2 is " << x2 << "\n";

  return 0;
}
