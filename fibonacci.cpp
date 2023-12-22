//Fibonacci�s FizzBuzz

#include <iostream>
#include <string>
#include <math.h>

using namespace std;
//using std::cout; using std::cin; using std::endl;

//Abstract base class
class Base {
public:

		//pure virtual function
		virtual string Format(int num) = 0;

		//define first-last number in sequence
		void PrintRange(int first, int last) {
	 		for (int i = first; i <= last; i++) {
				cout << Format(i) << endl;
			} 
		}

};

//Extend the base class
class Fizz : public Base {
public:

		//implement Format method of the division of 3 and return the number + "Fizz"
		string Format(int num) {

			if (num % 3 == 0) {
				return to_string(num) + " " + "Fizz";
			}else { 
				return to_string(num);
			}
		}

};

//Extend the base class again
class Buzz : public Base {
public:

		//implement Format method of the division of 5 and return the number + "Fizz"
		string Format(int num) {

			if (num % 5 == 0) {
				return to_string(num) + " " + "Buzz";
			} else{ 
				return to_string(num);
			}
		}

};


//Extend the base class last time
class FizzBuzz : public Base {
public:
		//Find the Fibonnaci sequence
		bool isPerfectSquare(int x) {
			return (floor(sqrt(x)) * floor(sqrt(x)) == x);
		}

		bool isFibonnaci(int x) {
			return isPerfectSquare(5 * pow(x, 2) + 4) || isPerfectSquare(5 * pow(x, 2) - 4);
		}

		//check if number is Fibonnaci, Division by 3 and 5, Division of 3 and Division of 5
		string Format(int num) {

			if (isFibonnaci(num)) {
				return to_string(num) + " " + "Fibonnaci";
			}
			else if (num % 3 == 0 && num % 5 == 0) {
				return to_string(num) + " " + "FizzBuzz";
			}
			else if (num % 3 == 0) {
				return to_string(num) + " " + "Fizz";
			}
			else if (num % 5 == 0) {
				return to_string(num) + " " + "Buzz";
			}
			else {
				return to_string(num);
			}

		}

};

int main() {

		cout << "Welcome to Fibonacci's FizzBuzz Game!" << endl;

		Fizz fizz;
		Buzz buzz;
		FizzBuzz fizz_buzz;

		cout << "++++++++++++++++++++++FIZZ+++++++++++++++++++" << endl;
		fizz.PrintRange(1, 100);
		cout << "++++++++++++++++++++++BUZZ+++++++++++++++++++" << endl;
		buzz.PrintRange(1, 100);
		cout << "++++++++++++++Fibonnaci FizzBuzz+++++++++++++" << endl;
		fizz_buzz.PrintRange(1, 100);

}
