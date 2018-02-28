#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string bigSum( string &input1, string &input2) {
  string sum = "";
  
  string largerInput = (input1.length() >= input2.length())? input1 : input2;
  int totalAppends = largerInput.length();
  
  int summations = (input1.length() >= input2.length())? input2.length() : input1.length();
  
  
  int excess = 0;
  int place;
  int rawSum;
  int valToAdd;
  
  reverse(input1.begin(), input1.end());
  reverse(input2.begin(), input2.end());
  
  for(place = 0; place < summations; place++) {
    rawSum = (input1[place] - '0') + ( input2[place] - '0') + excess;
    valToAdd = (rawSum) % 10;
    sum.append(std::to_string(valToAdd));
    excess = (rawSum - valToAdd)/10;
  }
  
  if(input1.length() > input2.length()||input1.length() <= input2.length()) {
    
    for(place; place < totalAppends; place++) {
      rawSum = (largerInput[place] - '0') + excess;
      valToAdd = (rawSum) % 10;
      sum.append(std::to_string(valToAdd));
      excess = (rawSum - valToAdd)/10;
    }
    
  }
  
  if(excess != 0) {sum.append(to_string(excess));}
  
  reverse(sum.begin(), sum.end());
  
  return sum;
  
}

int main() {
  string input1, input2;
  
  cout << "This is a script that sums large numbers.\n" << endl;
  cout << "Input your first number:" << endl;
  cin >> input1;
  cout << "Great! Now input your second number:" << endl;
  cin >> input2;
  
  cout <<" This is the sum of the your inputs is: " << bigSum(input1, input2) << endl;
  
  return 0;
}
