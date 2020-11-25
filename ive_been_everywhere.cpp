#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void remove(std::vector<string> &v) //got this remove code from www.techiedelight.com and tweaked it to work on a string vector
{
    auto end = v.end();
    for (auto it = v.begin(); it != end; ++it) {
        end = std::remove(it + 1, end, *it);
    }
 
    v.erase(end, v.end());
}

int main() {
  int cases, trips;
  cin >> cases;

  while(cases){

    vector<string> places;
    string cities;
    cin >> trips;

    for(int i = 0; i < trips; i++){
      cin >> cities;
      places.push_back(cities);

      remove(places);
    }
    cout << places.size() << endl;
    cases--;
  }

}
