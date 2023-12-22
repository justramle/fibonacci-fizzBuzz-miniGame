### General Description:

It is a counting game where numbers are counted from 1 to 100. 
- If a number is divisible by 3, it says the number + “ Fizz”. 
- If a number is divisible by 5, it says the number + “ Buzz”. 
- If a number is divisible by both 3 and 5, it says the number + “ FizzBuzz”. Otherwise, just say the number.


**Method:**
- Create an abstract base class which has two methods:
    - Format(int):str, which is a virtual function
    - PrintRange(int, int):void, which takes two numbers that define the first and last numbers in the FizzBuzz sequence.
- Extend this base class and implement the Format method such that it returns the string representation of a number. And if that number is divisible by 3, then it returns the string representation of the number +
“Fizz”.
- Use the PrintRange method to print a range from 1 to 100 with each entry formatted by the Format
method.
- Extend the base class again such that it has the same functionality as the previous class, except that when the number is divisible by 5, then it returns the string representation of the number + “ Buzz”.
- Use the PrintRange method of the new class to print a range from 1 to 100 with each entry formatted by the Format method.
- Extend the base class one last time. In this class, the Format method will return:
  - number + “ Fibonacci!” when the number is a Fibonacci number,
  - number + “ Fizz” when the number is divisible by 3 and not a Fibonacci number,
  - number + “ Buzz” when the number is divisible by 5 and not a Fibonacci number,
  - number + “ FizzBuzz” when the number is divisible by 3 and 5 and not a Fibonacci number.
- Use the PrintRange method of the new class to print a range from 1 to 100 with each entry formatted by
the Format method.

