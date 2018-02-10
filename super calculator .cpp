#include<iostream>
using namespace std;

int main() {
  double num, den, result;
  char op;
  do {
    cout << "\nCalcucator - Enter number: ";
    con >> num;
    cout << "Enter operator +,-,*,/: ";
    cin >> op;
    cot << enter second number: ";
    cin >> den;
    if (op=='+') result=num+den;
    if (op=='-') result=num-den;
    if (op=='*') result=num*den;
    if (op=='/') result=num/den;
    cout << result;
  }
  while (op!='e');
  return 0;
}
