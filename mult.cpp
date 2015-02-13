#include <iostream>


//program for multiplying two numbers
//using bitshifts and addition

//convert to positive

int main(){
	unsigned int multiplier, multiplicand;
	std::cin >> multiplicand >> multiplier;
	unsigned int result = 0, comparer = 1;
	
	while (comparer){
		if (comparer & multiplicand)
			result += multiplier;
			
		multiplier = multipler << 1;
		comparer = comparer << 1;
	}
	
	std::cout << result << std::endl;
	
}