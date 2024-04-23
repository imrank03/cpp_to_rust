#include <iostream>
#include "example.h"

using namespace std;

int main() {
  int input = 10;
  int output = double_input(input);
  cout<<"double input from cpp "<<input<<" * 2 = "<<output<<"\n";

  return 0;
}