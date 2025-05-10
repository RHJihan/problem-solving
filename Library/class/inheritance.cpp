#include <iostream>
using namespace std;

class AbstractEmployee {
  virtual void AskForPromotion() = 0;
};

class Employee : public AbstractEmployee {
private:
  string Name;
  string Company;
  int Age;

public:
  Employee(string name, string company, int age) {
    Name = name;
    Company = company;
    Age = age;
  }

  void setName(string name) { Name = name; }
  void setCompany(string company) { Company = company; }
  void setAge(int age) {
    if (age >= 18) {
      Age = age;
    }
  }

  string getName() { return Name; }
  string getCompany() { return Company; }
  int getAge() { return Age; }

  void IntroduceYourself() {
    cout << "Name: " << Name << endl;
    cout << "Company: " << Company << endl;
    cout << "Age: " << Age << endl;
  }

  void AskForPromotion() override {
    if (Age > 30)
      cout << Name << " got promoted!" << endl;
    else
      cout << Name << " is not eligible for promotion yet." << endl;
  }
};

class Developer : public Employee {
public:
  string FavoriteProgrammingLanguage;

  Developer(string name, string company, int age, string language) : Employee(name, company, age) {
    FavoriteProgrammingLanguage = language;
  }

  void FixBug() {
    cout << getName() << " fixed a bug using " << FavoriteProgrammingLanguage << endl;
  }
};

int main() {
  Developer dev("abc", "xyz", 28, "C++");
  dev.IntroduceYourself();
  dev.FixBug();
  dev.AskForPromotion();

  return 0;
}
