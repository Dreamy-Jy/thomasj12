#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;
void swap( int& val_one, int& val_two);
void bubbleSort(vector<int>& array);
void printVector(vector<int>& array);
void generateVector(vector<int>& array, int size);

int main() {

  vector<int> array;
  generateVector(array, 10);

  cout << "this is an unsorted array: ";
  printVector(array);

  bubbleSort(array);

  cout << "this is that same array sorted with the BubbleSort ";
  printVector(array);

  return 0;
}

void swap( int& val_one, int& val_two) {
  int temp = val_one;
  val_one = val_two;
  val_two = temp;
}

void bubbleSort(vector<int>& array) {
  for(int run = array.size() - 1; run > 1; run--) {
    for(int current_index = 0; current_index < run; current_index++) {
      if(array[current_index] > array[current_index + 1]) {
        cout<< "swapping idex: " << current_index << " value :" <<array[current_index] << " with index: " << (current_index + 1) << " value :" << array[current_index + 1] << endl;
        swap(array[current_index], array[current_index + 1]); }
    }
    cout << "After step " << (array.size() - run) << " , array is ";
    printVector(array);
  }
}

// Google Iterators
void printVector(vector<int>& array){
  for(auto value = array.begin(); value !=array.end(); ++value) {
    cout << *value << ' ';
  }
  cout << endl;
}


void generateVector(vector<int>& array, int size) {
  for(int element = 0; element < size; element++) {
    array.push_back(rand() % 100);
  }
}
