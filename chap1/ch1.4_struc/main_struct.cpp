#include <iostream>

struct Student {

  std::string name;
  int age;
  double gpa;

  void printInfo(){
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "GPA: " << gpa << std::endl;
  };
};

int main() {
  Student student1;
  student1.name = "John";
  student1.age = 20;
  student1.gpa = 3.5;
  student1.printInfo();
  return 0;
}
