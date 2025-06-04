#include <iostream>
#include <set>
using namespace std;

bool checkIfPangram(string sentence) {
  set<char> letters;

  for (int i = 0; i < (int)sentence.size(); i++) {
    letters.insert(sentence[i]);
  }

  if ((int)letters.size() == 26) {
    return true;
  }

  return false;
}

int main() {
  cout << checkIfPangram("thequickbrownfoxjumpsoverthelazydog") << endl;

  return 0;
}