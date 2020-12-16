#include <iostream>

using namespace std;

class mystring
{
private:
  char *ptr;
  int length;
public:
  // default constructor
  mystring();

  // conversion constructor
  mystring(const char* rValue);

  // copy constructor
  mystring(const mystring& ms);

  // assignment operator
  mystring& operator = (const mystring& ms);

  // destructor
  ~mystring();

  // ostream& operator <<()
  friend ostream& operator << (ostream& os, const mystring& ms);

  // index operator
  char operator [](const int index);

  inline int getLength()const{return length;};

};

mystring::mystring() : ptr(nullptr), length(0)
{/*left empty*/}

mystring::mystring(const char* rValue)
{
  cout << "conversion constructor" << endl;
 

  int rLength = 0;
  while(rValue[rLength++] != '\0'){/*left empty*/}

  ptr = new char[rLength];

  length = rLength;

  for(int i=0; i<length; i++)
  {
    ptr[i] = rValue[i];
  }

}

mystring::mystring(const mystring& ms)
{
  cout << "copy constructor" << endl;

  length = ms.getLength();

  ptr = new char[length];

  for(int i=0; i<length; i++)
  {
    ptr[i] = ms.ptr[i];
  }

}

mystring& mystring::operator = (const mystring& ms)
{
  cout << "assignment operator" << endl;
  if(ptr != nullptr)
  {
    delete[] ptr;
    ptr = nullptr;
  }

  length = ms.getLength();

  ptr = new char[length];

  for(int i=0; i<length; i++)
  {
    ptr[i] = ms.ptr[i];
  }

  return *this;

}

ostream& operator << (ostream& os, const mystring& ms)
{
  os << ms.ptr;
  return os;
}

mystring::~mystring()
{
  delete[] ptr;
}

char mystring::operator [] (const int index)
{
  return ptr[index];
}

int main()
{

  mystring ms1;

  ms1 = "baris";

  cout << ms1 << endl;

  cout << ms1[2] << endl;

  // // char* s = "baris";
  // mystring ms1 = "baris ayyildiz";

  // mystring ms2 = ms1;

  // ms2 = "qewqweqw";

  // cout << "ms1 : " << ms1 << endl;
  // cout << "ms2 : " << ms2 << endl;

  return 0;
}


