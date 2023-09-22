#include <iostream>
#include <string>

int main()
{
	int even[];
	int num = 2;
	int mult = 1;
	int many; //Number of even numbers that is to be printed out.

	std::cout << "Good day, lets count the even numbers together.\n";
	std::cout << "How many even numbers would you like us to count?\n";
	std::cin >> many;
	std::cout << "\n\n";
	std::cout << "Okay then, that's " << many << " sequential even numbers.\n\n";
	std::cout << "The listed even numbers are: "; 
	for(int i = 0; i < many; i++)
	{
		even[i] = num * mult;
		mult++;
		std::cout << even[i] << ", ";
	} 

	std::cout << "\n\n";
return 0;
}
