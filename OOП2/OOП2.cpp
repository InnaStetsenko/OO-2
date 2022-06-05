#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

//
//class Cat
//{
//public:
//	// поля:
//	string name; // кличка кота
//	double weight; // вес
//	bool is_hungry; // голодный или нет?
//	// метод:
//	void Sleep()
//	{
//		cout << name << " спит.";
//	}
//};int main()
//{
//	setlocale(0, "");
//	Cat c;
//	c.name = "Tomochka";
//	c.is_hungry = true;
//	c.weight = 5;
//	c.Sleep();
//}

class Cat
{
public: // модификатор доступа, если не указать public, то будет private, и компоненты класса будут недоступны.
	// поля:
	string name; // кличка кота
	string color; // цвет шёрстки
	int age; // возраст в годах
	double weight; // вес
	bool is_hungry; // голодный или нет?
	int energy;//запас енергии 0-100 0- умерла, 100 полна энергии

	// методы:
	void Play()
	{
		cout << name << " is playing\n";
	}

	void Sleep()
	{
		cout << name << " is sleeping\n";
	}

	void Hunt()
	{
		cout << name << " is hunting\n";
	}
	void Eat()
	{
		cout << name << " is eating\n";
		weight += 0.2;
		is_hungry = false;
		energy += 10;
		if (energy > 100) energy = 100;
	}
	void Print()
	{
		cout << name << " Name\n";
		cout << color << " color\n";
		cout << age << " age\n";
		cout << weight << " weight\n";
		if (is_hungry == 1)
			cout << " is_hungry\n";
		else cout << " is not hungry";
	}
	void Speak()
	{
		cout << "Cat is saying Maow\n";
	}
};

int main()
{
	Cat cat;
	cat.name = "Barsik";
	cat.age = 3;
	cat.weight = 5;
	cat.is_hungry = true;

	cat.Print();
	cat.Eat();
    cat.Speak();
	cat.Print();
}



