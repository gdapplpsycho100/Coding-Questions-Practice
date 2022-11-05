#include <iostream>
#include <stack>
#include <utility>
#include <vector>

using namespace std;

int collisionBox(vector<pair<int, int>> centers) {
  int counter = 0;
  for (int i = 0; i < centers.size(); i++) {
    for (int j = i + 1; j < centers.size(); j++) {
      int tempX1 = centers[i].first;
      int tempY1 = centers[i].second;
      int tempX2 = centers[j].first;
      int tempY2 = centers[j].second;
      if (tempX1 - tempX2 <= 2 && tempY1 - tempY2 <= 2 &&
          tempX2 - tempX1 <= 2 && tempY2 - tempY1 <= 2) {
        counter++;
      }
    }
  }
  return counter;
}

int main(int argc, char *argv[]) {
  pair<int, int> p1(1, 1);
  pair<int, int> p2(2, 2);
  pair<int, int> p3(0, 4);
  pair<int, int> p4(1, 1);
  vector<pair<int, int>> centers;
  centers.push_back(p1);
  centers.push_back(p2);
  centers.push_back(p3);
  centers.push_back(p4);
  for (int i = 0; i < centers.size(); i++) {
    cout << centers[i].first << ", ";
    cout << centers[i].second << endl;
  }
  cout << collisionBox(centers) << endl;
}
