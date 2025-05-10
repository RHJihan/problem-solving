#include <iostream>
using namespace std;

class AbstractEmployee {
  virtual void AskForPromotion() = 0;
};

class Employee : AbstractEmployee {
private:
  string Name;
  string Company;
  int Age;

public:
  Employee() {
    Name = "";
    Company = "";
    Age = 0;
  }

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
    } else {
      cout << "Age must be 18 or older." << endl;
    }
  }

  string getName() {
    return Name;
  }
  string getCompany() {
    return Company;
  }
  int getAge() {
    return Age;
  }

  void IntroduceYourself() {
    cout << "Name: " << Name << endl;
    cout << "Company: " << Company << endl;
    cout << "Age: " << Age << endl;
  }

  void AskForPromotion() {
    if (Age > 30)
      cout << Name << " got promoted!" << endl;
    else
      cout << Name << " is not eligible for promotion yet." << endl;
  }
};

int main() {
  Employee employee1("Alice", "TechCorp", 28);
  employee1.IntroduceYourself();
  employee1.AskForPromotion();

  employee1.setAge(35);
  cout << endl;
  cout << "After updating age:" << endl;
  employee1.AskForPromotion();

  return 0;
}
