#include <iostream>

using namespace std;

int sum(int n);

int main() {

  int n;
  
  cout << "Hello World!" << endl;
  cout << "Enter a number: ";
  cin >> n;

  cout << "The summed value is: " << sum(n) << endl;
  
  return 0;
}

int sum(int n) {

  int sum = 0;

  for (int i = 0; i <= n; i++) {

    sum += i;
  }

  return sum;
}
