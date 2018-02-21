#include <iostream>

using namespace std;
int main() {
  int input1, input2, operation, result, remander = 0;

  cout << "input 1" << endl;
  cin >> input1;
  cout << "operator (1 \"+\", 2 \"–\", 3 \"*\", 4 \"/\")" << endl;
  cin >> operation;
  cout << "input 2" << endl;
  cin >> input2;
  
  switch(operation) {
    case 1 : result = input1 + input2;
      break;

    case 2 : result = input1 - input2;
      break;      

    case 3 : result = input1 * input2;
      break;

    case 4 : result = (input2 == 0) ? 0 : input1/input2;
             remander = (input2 == 0) ? -1: input1%input2;
      break;
    default: remander = -1;
  }
  
  if (remander >= 0)
    cout << "result " << result << " remander " << remander << endl;
  else
    cout << "error: can't divide by 0 or your operator wasn't right" << endl;
  return 0;
}