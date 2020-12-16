#include <iostream>
#include <string>

using namespace std;

namespace person
{

	enum Gender
	{
		F = 0,
		M = 1
	};

	class Person
	{
	private:
		string firstName;
		string lastName;
		int age;
		Gender gender;
		static int allCounter;
		static int aliveCounter;
	public:
		Person(string fn, string ln, int a = 10, Gender g = F);

		static int getAll();
		static int getAlive();

		bool operator == (const Person& p1);
		bool operator != (const Person& p1);

		Person& operator +(const Person& p1);
		friend ostream& operator << (std::ostream& out, const Person& p1);
		bool operator < (const Person& p1);
		Person& operator += (const Person& p1);

		string getFirstName()const;
		string getLastName()const;
		int getAge()const;
		Gender getGender()const;
	};

	Person::Person(string fn, string ln, int a, Gender g) : firstName(fn), lastName(ln), age(a), gender(g)
	{/*left empty*/}

	int Person::allCounter = 0;
	int Person::aliveCounter = 0;

	int Person::getAll()
	{
		return allCounter;
	}

	int Person::getAlive()
	{
		return aliveCounter;
	}

	bool Person::operator==(const Person& p1)
	{
		return ((firstName == p1.firstName) && (lastName == p1.lastName) && (age == p1.age));
	}

	bool Person::operator!=(const Person& p1)
	{
		return !((*this) == p1);
	}

	Person& Person::operator+(const Person& p1)
	{
		age += p1.age;
		return *this;
	}

	bool Person::operator<(const Person& p1)
	{
		return (age < p1.age);
	}

	Person& Person::operator +=(const Person& p1)
	{
		age += p1.age;
		return *this;
	}

	ostream& operator << (std::ostream& out, const Person& p1)
	{
		out << p1.getFirstName() << std::endl;
		out << p1.getLastName() << std::endl;
		out << p1.getAge() << std::endl;
		if(p1.getGender() == M)
			out << "Male" << std::endl;
		else
			out << "Female" << std::endl;

		return out;
	}

	// getter functions
	string Person::getFirstName()const{return firstName;};
	string Person::getLastName()const{return lastName;};
	int Person::getAge()const{return age;};
	Gender Person::getGender()const{return gender;};

}

using namespace person;

int main()
{
	Person p1("baris", "ayyildiz", 21, M);
	Person p2("asya", "ayyildiz", 24, F);
	
	cout << p1;


	return 0;
}
