/*************************
 * Автор: Карпов Кирилл  *
 * Дата:	 28.12.2007  *
 * Название: вариант 4   *
 *************************/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double sigma, d, U;
  const double g = 981.0;
  const double gamma = 1.0;

  cout << " sigma = ";
  cin >> sigma;

  cout << " Enter the initial d = ";
  cin >> d;

    while (d < 0.5) {
	  U = sqrt(((g * d) / 2.0) + ((2.0 * g * sigma) / (gamma * d)));
	  cout << " d =" << d << " U =" << U << endl;
	  d = d + 0.1;
	} 
	do {
	  U = sqrt(((g * d) / 2.0) + ((2.0 * g * sigma) / (gamma * d)));
	  cout << " d =" << d << " U =" << U << endl;
	  d = d + 0.5;
	} while (d <= 3);
    
	return 0;
}