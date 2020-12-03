#include <iostream>

using namespace std;

class Test
{
private:
  char *ptr;
public:

  Test() : ptr(nullptr)
  {/*left empty*/}

  Test(string s1) : ptr(nullptr)
  {
    ptr = new char[s1.length()];
    for(int i=0; i<=s1.length(); i++)
    {
      ptr[i] = s1[i];
    }

    cout << "in constructor..." << endl;
  }

  // Test& operator=(const Test& t1)
  // {
  //   cout << "assignment operator" << endl;
  //   return *this;
  // }

  ~Test()
  {
    if(ptr == nullptr)
      delete[] ptr;
  }

  void set(string s1)
  {
    for(int i=0; i<=s1.length(); i++)
    {
      ptr[i] = s1[i];
    }
  }

  void display()
  {
    cout << ptr << endl;
  }


};


int main()
{
  Test t1("baris");
  t1.display();         // baris

  Test t2 = t1;

  t2.display();         // baris

  t2.set("abc");

  t2.display();         // abc
  t1.display();         // abc

  Test t3;

  t3 = t1;

  cout << "t3 : ";
  t3.display();

  // t3 = t1;              // assignment operator

  // Yukarıdaki durumda işlem önceliği
  // 1.(operator =)
  // 2.copy constructor



  return 0;
}
