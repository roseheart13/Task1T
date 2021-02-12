

#include <iostream>
#include <string>

template <class T1, class T2, class T3>

class Animal {
public :
	T1 name;
	T2 birth;
	T3 age;

	Animal(T1 _name, T2 _birth, T3 _age) : name{ _name }, birth{ _birth }, age{ _age }
	{

	}
	T1 getValueT1();
	std::string Getval(T1, T2);

	class Dog {

		T1 dog;
		T2 2007;
		T3 14;

		class Speak {

		};

		//speak = bark bark

	};

	class Cat {

		T1 cat;
		T2 2011;
		T3 10;

		class Speak {

		};

		//speak = mjau mjau

	};

	class Bird {

		T1 bird;
		T2 2016;
		T3 5;

		class Speak {

		};
		
		//speak = pip pip

	};


	speak() 
};



void animal() {
	int animal;

	std::cout << "What animal do you want info on? " << std::endl;
	std::cin >> animal;


}

int main()
{
 
   
}



template<class T1, class T2, class T3>
T1 Animal<T1, T2, T3>::getValueT1()
{
	return T1();
}

template<class T1, class T2, class T3>
std::string Animal<T1, T2, T3>::Getval(T1, T2)
{
	return std::string();
}
