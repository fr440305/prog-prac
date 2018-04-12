#include <iostream>
#include <string>
#include <string>
#include "SquareMatrix.h"

int main () {
	// ctor test:
	try {
		SquareMatrix m1(4);
		SquareMatrix m2 = {1, 2, 3, 4};
		std::vector<double> v = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
		SquareMatrix m3(v, 3);
		SquareMatrix m4(
			// std::cin,
			2
		);
		//std::cout << m3.at_(10 , 10 ) << std::endl;

		std::cout << m1 << m2 << m3 << m4 << std::endl;
	} catch (std::string& e) {
		std::cout << e << std::endl;
	}

	// stream operators test:
	try {
		SquareMatrix M(2);
		SquareMatrix N = {5, 6, 7, 8};
		std::cout << "row(M, N) == " << M.rows_ << ", " << N.rows_ << std::endl;
		//std::cin >> M >> N;
		std::cout << M << N;
	//std::cout << M << N;
	} catch (std::string& e) {
		std::cout << e << std::endl;
	}

	
	// row operations test:
	std::cout << "row operation test: " << std::endl;
	SquareMatrix A = {1,2,3,2,3,4,-1,0,2,3,2,-2,4,0,0,1};
	std::cout << A;
	A.swap(2, 3);
	A.xpay(1, 0.5, 4);
	A.scale(-1.5, 3);
	std::cout << A;
/*
*/
	
	return 0;
}