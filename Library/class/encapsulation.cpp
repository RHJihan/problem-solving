#include <iostream>
using namespace std;

class Employee {
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

  void setName(string name) {
    Name = name;
  }

  void setCompany(string company) {
    Company = company;
  }

  void setAge(int age) {
    Age = age;
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
};

int main() {
  Employee employee1;

  employee1.setName("abc");
  employee1.setCompany("xyz");
  employee1.setAge(30);

  cout << "Name: " << employee1.getName() << endl;
  cout << "Company: " << employee1.getCompany() << endl;
  cout << "Age: " << employee1.getAge() << endl;

  return 0;
}
