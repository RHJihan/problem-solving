#include <iostream>
#include <string>
#include <vector>
using namespace std;

string checkNumber(string &s) {
  string digits = "";
  for (char c : s) {
    if (isdigit(c))
      digits += c;
  }

  bool allSame = true, strictlyDecreasing = true;
  for (int i = 1; i < 6; i++) {
    if (digits[i] != digits[0])
      allSame = false;
    if (digits[i] >= digits[i - 1])
      strictlyDecreasing = false;
  }

  if (allSame)
    return "taxi";
  if (strictlyDecreasing)
    return "pizza";
  return "girls";
}

void printResult(const string &message, vector<string> &names) {
  cout << message;
  for (int i = 0; i < (int)names.size(); i++) {
    if (i > 0)
      cout << ", ";
    cout << names[i];
  }
  cout << "." << endl;
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n;
  cin >> n;

  int taxi_max = 0, pizza_max = 0, girls_max = 0;
  vector<string> best_taxi, best_pizza, best_girls;

  for (int i = 0; i < n; i++) {
    int s;
    string name;
    cin >> s >> name;

    int taxi_count = 0, pizza_count = 0, girls_count = 0;

    for (int j = 0; j < s; ++j) {
      string number;
      cin >> number;
      string type = checkNumber(number);
      if (type == "taxi")
        taxi_count++;
      else if (type == "pizza")
        pizza_count++;
      else
        girls_count++;
    }

    if (taxi_count > taxi_max) {
      taxi_max = taxi_count;
      best_taxi = {name};
    } else if (taxi_count == taxi_max) {
      best_taxi.push_back(name);
    }

    if (pizza_count > pizza_max) {
      pizza_max = pizza_count;
      best_pizza = {name};
    } else if (pizza_count == pizza_max) {
      best_pizza.push_back(name);
    }

    if (girls_count > girls_max) {
      girls_max = girls_count;
      best_girls = {name};
    } else if (girls_count == girls_max) {
      best_girls.push_back(name);
    }
  }

  printResult("If you want to call a taxi, you should call: ", best_taxi);
  printResult("If you want to order a pizza, you should call: ", best_pizza);
  printResult("If you want to go to a cafe with a wonderful girl, you should call: ", best_girls);

  return 0;
}
