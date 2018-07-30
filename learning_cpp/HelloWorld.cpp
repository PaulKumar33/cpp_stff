#include "stdafx.h"
#include<string>

#include<iostream>
#include<bitset>
#include<sstream>
using namespace std;

int RegisterFunction() {
	std::cout << "enter a price :" << "\n";
	int price = 0;
	string input;
	std::cin >> input; 
	stringstream(input) >> price;

	float total = 0;
	int quant = 0;
	std::cout << "now input a quantity: " << "\n";
	std::cin >> input;
	stringstream(input) >> quant;
	std::cout << " Final Price: " << quant * price;

	total = quant * price;
	return total;
}

int IntegerFunction() {
	/*
	this method describes the different forms of integers. Also used
	to get a feeling for the in/out functionality of Cpp	
	*/

	int number = 75;
	unsigned int num2 = 2;
	long int num3 = 1024;
	unsigned long int num4 = 2048;



	std::cout << "lets see if c++ can idsplay using the hex method \n";
	std::cout << std::hex << number << "\n";
	return 0;
}

int main() {
	std::cout << "Hello World\n";

	int number = 75;
	unsigned int num2 = 2;
	long int num3 = 1024;
	unsigned long int num4 = 2048;

	std::cout << "lets see if c++ can idsplay using the hex method: ";
	std::cout << std::hex << 75 << "\n";

	std::cout << "Attempting to display bit values: ";
	std::bitset<8> x(number);
	std::cout << x << "\n";

	x = x << 2;
	int bitNum = int(x.to_ulong());

	std::cout << "shifting the bits 2 bits to the left yeilds: " << x << ". In Binary: " << bitNum;

	/*
	Now is time to take a dabble with cin
	*/

	//to properly use cin, first the input variable must be declared and its type

	int inputNum;
	string myString;
	std::cout << "input a number";
	std::cin >> inputNum;
	std::cout << "The integer is: " << inputNum << ". Now input a string.... ";

	std::cin >> myString;
	std::cout << "This is a string: " << myString << ". I forgot C/C++ is gay and doesnt have string types";

	RegisterFunction();

	return 0;
}