#include <iostream>
using std::cout;

class Grandpa
{
	public:
		void chocolate() { cout<<"A chocolate for you!\n"; };
};

class Dad : virtual public Grandpa
{	
};

class Mom : virtual public Grandpa
{	
};

class Kid : public Dad, public Mom
{
};

int main() 
{
	Kid krish;
	krish.chocolate();
}
