// Learning for each loop ...
// We use for each loop because of the fact that when we want to do operation on each element in array or vector...
//Foreach loop is used to iterate over the elements of a containers (array, vectors etc) quickly without 
//performing initialization, testing and increment/decrement.
// The working of foreach loops is to do something for every element rather than doing something n times.
// There is no foreach loop in C, but both C++ and Java have support for foreach type of loop.
// Sytnax:
// for (data_type  variable_name : container_type) {

     //operations using variable_name

//}



// C++ program to demonstrate use of foreach for array
#include <iostream>
using namespace std;

int main()
{
	int arr[] = { 10, 20, 30, 40 };

	// Printing elements of an array using
	// foreach loop
	// Here, int is the data type, x is the variable name
	// and arr is the array for which we want to iterate foreach
	cout<<"Traversing the array with foreach using array's data type: ";
	for (int x : arr)
		cout<<x<<" ";
	
	// data type of x is set as int
	cout<<"\nTraversing the array with foreach using auto keyword	 : ";
	for (auto x : arr)
	cout<<x<<" ";
}

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {

// 	vector<string> value{"This", "is", "foreach", "example", "using", "vector."};
	
// 	cout<<"Traversing the vector with foreach using vector's data type: ";
// 	for (string v : value) {
// 		cout<<v<<" ";
// 	}

// 	cout<<"\nTraversing the vector with foreach using auto keyword	 : ";
// 	for (auto v : value)
// 	cout<<v<<" ";
// 	return 0;
// }
