#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

namespace Exam1 // NAMESPACE
{
	// STEP 1: Complete the implementation of the Footwear base class 
	// as described in the UML diagram
	class FootWear
	{

	public:
		FootWear(int size) {
			// Complete the implementation
		}
		virtual void Description() = 0;
	};

	class Wheel
	{
	private:
		string color;
	public:
		Wheel() {}
		void set_color(string color) {
			this->color = color;
		}
	};

	// STEP 2:  Define the Sandle and RollerSkate classes as described
	// in the UML diagram.   For this test, you do not need to separate
	// the class implementation into a cpp file.
	class Sandle {


	};

	class RollerSkate {


	};
}

int main()
{
	Exam1::FootWear * ShoeCloset[2];

	// STEP 3: Assign ONE RollerSkate AND ONE Sandle object to each of the two elements 
	// in the ShoeCloset array.  Remember the classes are defined in the namespace Exam1.
	//ShoeCloset[0] = ???
	//ShoeCloset[1] = ???

	for (int i = 0; i < 2; ++i)
	{
		// The method Description() should display an output like 
		// “I am a sandle (or rollerSkate) and my size is X”,
		// where X is the shoe size of the Sandle or RollerSkate objects you constructed above.
		ShoeCloset[i]->Description();
	}
}