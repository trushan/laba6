#include<iostream>
#include<string>
using namespace std;

class Alive
{
protected:
	string name, habitat;
public:

	void SetName(string n)
	{
		name = n;
	}	
	
	void SetHabitat(string h)
	{
		habitat = h;
	}
	
	string GetName()
	{
		return name;
	}
	
	string GetHatibat()
	{
		return habitat;
	}
};

class Bird : public Alive
{
public:

	void Fly()
	{
		cout << "I'm Flying!!!!" << endl;
	}
	
	void Peck()
	{
		cout << "I'm Pecking!!!!" << endl;
	}
};

class Fish : public Alive
{
public:
	void Swim()
	{
		cout << "I'm swimming!!!!" << endl;
	}
	
	void Gurgle()
	{
		cout << "I'm Gurgling!!!!" << endl;
	}
	
	
};

class Animal : public Alive
{
public:
	void Hunt()
	{
		cout << "I'm Hunting!!!!" << endl;
	}
	
	void Roar()
	{
		cout << "Roar!!!" << endl;
	}
};

int main()
{
	Fish fish;
	Bird bird;
	Animal wolf;
	
	string nn = "Ptica!";
	bird.SetName(nn);
	cout << "bird name = " << bird.GetName() << endl;
	
	fish.Swim();
	bird.Fly();
	wolf.Roar();
	
	return 0;
}