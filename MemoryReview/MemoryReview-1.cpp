#include <iostream>
using namespace std;

struct Person
{
	char name[32];
	int id;
};

void Square(int& i)
{
	i = i * i;
}

void Double(int* i)
{
	*i = *i * 2;
}

int main()
{
	// ** REFERENCE **
	// 
	// declare an int variable and set the value to some number (less than 10)
	// declare a int reference and set it to the int variable above
	int someNumber = 5;
	int& someNumberRef = someNumber;

	// output the int variable
	cout << "Original int variable: " << someNumber << endl;


	// set the int reference to some number
	someNumberRef = 10;

	// output the int variable
	cout << "Int variable after reference change: " << someNumber << endl;
	

	// what happened to the int variable when the reference was changed? (insert answer)
	
	// the int variable was changed to 10 because the reference is an alias to the original variable


	// output the address of the int variable
	cout << "Address of int variable: " << &someNumber << endl;
	// output the address of the int reference
	cout << "Address of int reference: " << &someNumberRef << endl;
	// are the addresses the same or different? (insert answer)
	
	// the addresses are the same because the reference is an alias to the original variable

	// ** REFERENCE PARAMETER **
	//
	// create a function above main() called Square that takes in an int parameter
	
	// in the function, multiply the int parameter by itself and assign it back to the parameter (i = i * i)
	// call the Square function with the int variable created in the REFERENCE section
	Square(someNumber);

	// output the int variable to the console
	cout << "Int variable after Square function call: " << someNumber << endl;

	// !! notice how the variable has not changed, this is because we only passed the value to the function !!
	// change the Square function to take a int reference
	// !! notice how the calling variable has now changed, this is because we 'passed by reference' !!
	// !! when a function takes a reference parameter, any changes to the parameter changes the calling variable ""



	// ** POINTER VARIABLE **
	// 
	// declare an int pointer, set it to nullptr (it points to nothing)
	int* someNumberPtr = nullptr;
	// set the int pointer to the address of the int variable created in the REFERENCE section
	someNumberPtr = &someNumber;
	// output the value of the pointer
	cout << "Pointer value: " << someNumberPtr << endl;
	// what is this address that the pointer is pointing to? (insert answer)
	// the address of the int variable created in the REFERENCE section
	

	// output the value of the object the pointer is pointing to (dereference the pointer)
	cout << "Pointer dereference value: " << *someNumberPtr << endl;
	// ** POINTER PARAMETER **
	//
	// create a function above main() called Double that takes in an int pointer parameter
	// in the function, multiply the int pointer parameter by 2 and assign it back to the parameter (i = i * 2)
	// !! make sure to dereference the pointer to set the value and not set the address !!
	// call the Double function with the pointer created in the POINTER VARIABLE section
	Double(someNumberPtr);
	
	// output the dereference pointer
	cout << "Pointer dereference value after Double function call: " << *someNumberPtr << endl;
	// output the int variable created in the REFERENCE section
	cout << "Int variable after Double function call: " << someNumber << endl;
	// did the int variable's value change when using the pointer?
	// yes, the int variable's value changed to 200 because the pointer is pointing to the original variable

}