//This is a simple program that covers some of the main string functions that are in the string library that are
//commonly used 
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    //variable declarations
	string s1 = "Hello all Tacos are Awesome";
	string s2("Ham is spam oh yes I am");
	string s3("Hello I am Spencer and I love Pizza, who doesn't?");

	//Used to show that a string is exactly an array of characters 
	for (int i = 0; i < s1.length(); i++) {
		cout << s1.at(i);
	}
	cout << endl;

	//substr() takes two parameters where the first is where you would like to start the index and
	//the second parameter is how many characters you would like to read
	cout << s1.substr(10,17) << endl;

	//The swap() swaps both of the array of characters with each other respectively
	s1.swap(s2);
	cout << s1 << " " << s2 << endl;
	s2.swap(s1);

	//The find function searches for the index of the array of the characters and returns the index number
	cout << s2.find("am") << endl;

	//The rfind does the same thing as the find(), but starts from the back of the array
	cout << s2.rfind("am") << endl;

	cout << s3 << endl;

	//The erase() takes one parameter where you would like to start erasing the string
	s3.erase(35);
	cout << s3 << endl;

	//The replace function takes three parameters that starts with the index # and how many characters you want to replace
	//and finally the last parameter is what you would like to replace it with
	cout << s3.replace(35, 14, " We all love Pizza!") << endl;

	//The insert() takes two parameters, the first is what index you would like to start the insert() at
	//and the last one is what you would like to replace it with
	cout << s1.insert(6, "every and ");
}


/*OUTPUT: 
Hello all Tacos are Awesome
Tacos are Awesome
Ham is spam oh yes I am Hello all Tacos are Awesome
1
21
Hello I am Spencer and I love Pizza, who doesn't?
Hello I am Spencer and I love Pizza
Hello I am Spencer and I love Pizza We all love Pizza!
Hello every and all Tacos are Awesome*/