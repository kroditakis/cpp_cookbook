#include <iostream>

#include <boost/bind.hpp>
#include <boost/function.hpp>

void simple_function(){
	std::cout << "This is a of using a simple function pointer"<<std::endl;
}

struct CallbackManager
{

	void func_A();



};

void CallbackManager::func_A(){

	std::cout << "This is an example of using a function pointer of an instance"<<std::endl;

}

int main()
{

	CallbackManager manager;


/*Non Member Funcition*/
	/*C-Way*/
	void (*p)();
	p=simple_function;


	/*Boost way*/
	boost::function<void()> boostp;
	boostp=boost::bind(simple_function);

/****/



	void (CallbackManager::*p2)()=NULL;


	p();
	boostp();
	return 0;
}


/*Refs
http://www.radmangames.com/programming/how-to-use-boost-bind
*/
