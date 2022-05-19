#include <iostream>
#include "../GlobalDef.h"

class Singleton
{
private:

	int connect = false;
	Singleton()
	{	
		std::cout << "Object created " << std::endl;
	}

public:

	static Singleton* get_instance()
	{
		static Singleton* obj = new Singleton();

		return obj;

	}
	
	Connect()
	{
		if (connect == false )
		{
			std::cout << "Connected to database \n";
			connect = true;
		}

		return 0;
	}

	~Singleton()
	{
		std::cout <<"Object destroyed \n";
	}
};

int main(int argc, char const *argv[])
{
	
	Singleton* obj1 = Singleton::get_instance();

	Singleton* obj2 = Singleton::get_instance();

	obj2->Connect();
	obj1->Connect();
	LOG(obj1);
	LOG(obj2);
	return 0;
}