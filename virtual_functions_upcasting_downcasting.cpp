#include <iostream>
#include <string>

using namespace std;

class Pet
{
public:
    string name;
    virtual void print( ) const;
};

class Dog : public Pet
{
public:
    string breed;
    virtual void print( ) const;
};

void Pet::print( ) const
{
    cout << "name: " << name << endl;
}

void Dog::print( ) const
{
    cout << "name: " << name << endl;
    cout << "breed: " << breed << endl;
}

int main()
{
	// Late Binding
	Pet *ppet;
	Dog *pdog;

	pdog = new Dog;
	pdog->name = "pointer";
	pdog->breed = "golden";

	ppet = pdog;	// UPCASTING!!

	ppet->print();

	// pdog = ppet;	// illegal

	// DOWNCASTING
	pdog = dynamic_cast<Dog*>(ppet); // legal



	// Early Binding
	// Pet vpet;
	// Dog vdog;

	// vdog.name = "pointer";
	// vdog.breed = "golden";

	// vpet = vdog;

	// vpet.print();

	// // cout << vdog.name << endl;
	// // cout << vdog.breed << endl;



	return 0;
}
