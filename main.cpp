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

  for(auto iterator = v.begin(); iterator != v.end(); iterator++) {
    cout << "element:" << *iterator << endl;
  }

  return 0;
}
