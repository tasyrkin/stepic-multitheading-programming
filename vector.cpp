#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char**argv){
  vector<int> v;

  cout << "size: " << v.size() << endl;
  cout << "capacity: " << v.capacity() << endl;

  for(int i = 0; i < 7; i++) {
    v.push_back(i+1);
  }

  cout << "size: " << v.size() << endl;
  cout << "capacity: " << v.capacity() << endl;

  cout << "last element: " << v[v.size()] << endl;

  cout << "----- Start mutable iterator ----- " << endl;
  //mutable iterator
  for(auto iterator = v.begin(); iterator != v.end(); iterator++) {
    cout << "element:" << *iterator << endl;
    *iterator = *iterator + 100;
  }
  cout << "----- End ----- " << endl;

  cout << "----- Start constant iterator ----- " << endl;
  //constant iterator
  for(auto iterator = v.cbegin(); iterator != v.cend(); iterator++) {
    cout << "element:" << *iterator << endl;
    //mutation is not allowed
    //*iterator = *iterator + 100;
  }
  cout << "----- End ----- " << endl;

  cout << "----- Start reverse mutable iterator ----- " << endl;
  //reverse mutable iterator
  for(auto iterator = v.rbegin(); iterator != v.rend(); iterator++) {
    cout << "element:" << *iterator << endl;
    *iterator = *iterator + 1000;
  }
  cout << "----- End ----- " << endl;

  cout << "----- Start reverse constant iterator ----- " << endl;
  //reverse constant iterator
  for(auto iterator = v.crbegin(); iterator != v.crend(); iterator++) {
    cout << "element:" << *iterator << endl;
    //*iterator = *iterator + 1000;
  }
  cout << "----- End ----- " << endl;

  return 0;
}
