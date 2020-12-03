#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
  string name, surname;
  int age;
public:
  Person();                               // default constructor
  Person(string n, string s, int a);      // constructor
  Person(const Person &a);                // copy constructor
  Person& operator = (const Person &a);   // assignment operator
  Person(string s);                       // conversion constructor
    
  // displaying the info
  void getInfo();

};

Person::Person()
{
  cout << "Default constructor çalıştı" << endl;
}

Person::Person(string n, string s, int a) : name(n), surname(s), age(a)
{
  cout << "Constructor fonksiyonu çalıştı" << endl;
}

Person::Person(const Person &a)
{
  name = a.name;
  surname = a.surname;
  age = a.age;

  cout << "Copy constructor çalıştı" << endl;
}

Person& Person::operator = (const Person &a)
{
  name = a.name;
  surname = a.surname;
  age = a.age - 50;

  cout << "Assignment operatörü çalıştı" << endl;

  return *this;
}

Person::Person(string s)
{
  name = s;
  surname = s;
  age = 100;

  cout << "Conversion constructor çalıştı" << endl; 
}

void Person::getInfo()
{
  cout << "name : " << name << ", surname : " << surname << ", age : " << age << endl;
}

int main()
{
  Person p1("qwe", "zxc", 20);
  p1.getInfo();

  cout << "------------------------------------------" << endl;

  string s1 = "abc";


  // Önce conversion constructor çalıştı
  // Ve elde ettiği değeri assignment öperatörü ile p1'e atadı
  p1 = s1;

  // Neden p1'in age değişkeninin 50 olduğuna dikkat et!!!!

  p1.getInfo();

  // 1.conversion constructor
  // 2.assignment operator


  return 0;
}
