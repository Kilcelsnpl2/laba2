/*************************
 * Автор: Карпов Кирилл  *
 * Дата:	 28.12.2007  *
 * Название: вариант 4   *
 *************************/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double sigma, d, U, d1, d2;
  const double g = 9.81;
  const double gamma = 1.0;
  double g2 = g * 100; // m/s^2 => km/s^2

  cout << " sigma = ";
  cin >> sigma;

  cout << " Enter the initial d = ";
  cin >> d;

  cout << " the final diameter of the first cycle = ";
  cin >> d1;

  cout << " the final diameter of the second cycle = ";
  cin >> d2;

    while (d < d1) {
	  U = sqrt(((g2 * d) / 2.0) + ((2.0 * g2 * sigma) / (gamma * d)));
	  cout << " d =" << d << " U =" << U << endl;
	  d = d + 0.1;
	} 
	do {
	  U = sqrt(((g2 * d) / 2.0) + ((2.0 * g2 * sigma) / (gamma * d)));
	  cout << " d =" << d << " U =" << U << endl;
	  d = d + 0.5;
	} while (d <= d2);
    
	return 0;
}