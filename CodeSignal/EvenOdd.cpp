/*
Given an array, add up the numbers in the even index, 
and then add up the numbers in the odd index, 
all the added-up numbers must be in [-100, 100]
Then return the result of the EcenSum - OddSum.
*/ 
#include <iostream>
#include <vector>

using namespace std;

int sums(vector<int> numbers) {
  int evenSum = 0;
  int oddSum = 0;
  if (numbers.size() == 0) {
    return 0;
  }
  if (numbers.size() == 1) {
    return numbers[0];
  }
  for (int i = 0; i < numbers.size(); i++) {
    if (i % 2 == 0) {
      if (-100 <= numbers[i] && numbers[i] <= 100) {
        evenSum += numbers[i];
      }
    } else if (i % 2 != 0) {
      if (-100 <= numbers[i] && numbers[i] <= 100) {
        oddSum += numbers[i];
      }
    }
  }
  cout << evenSum << endl;
  cout << oddSum << endl;
  return evenSum - oddSum;
}

int main(int argc, char *argv[]) {
  // test cases
  vector<int> num1{101, 3, 4, 359, 2, 5};
  cout << sums(num1) << endl;
  vector<int> num2{-2, 234, 100, 99, 540, -1};
  cout << sums(num2) << endl;
  vector<int> num3{-9};
  cout << sums(num3) << endl;
}
