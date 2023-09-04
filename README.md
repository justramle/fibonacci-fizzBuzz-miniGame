## General Description:

**Creating the game named FizzBuzz. It is a counting game where numbers are counted from 1 to 100. If a number is divisible by 3,
say the number + “ Fizz”. If a number is divisible by 5, say the number + “ Buzz”. If a number is divisible by both 3
and 5, say the number + “ FizzBuzz”. Otherwise, just say the number. But in Fibonacci’s FizzBuzz, there is an
additional challenge. If a number is contained in the Fibonacci sequence, then say the number + “ Fibonacci!”. In
order to successfully complete the challenge, knowledge of object oriented programming must be demonstrated.**


**Specifics:**
- Create an abstract base class which has two methods:
 - Format(int):str, which is a virtual function
 - PrintRange(int, int):void, which takes two numbers that define the first and last numbers in the
FizzBuzz sequence. Then it applies the Format method to each number in the sequence and
sends it to the output stream.
- Extend this base class and implement the Format method such that it returns the string representation of
a number. And if that number is divisible by 3, then it returns the string representation of the number +
“Fizz”.
- Use the PrintRange method to print a range from 1 to 100 with each entry formatted by the Format
method.
- Extend the base class again such that it has the same functionality as the previous class, except that when
the number is divisible by 5, then it returns the string representation of the number + “ Buzz”.
- Use the PrintRange method of the new class to print a range from 1 to 100 with each entry formatted by
the Format method.
- Now, extend the base class one last time. In this class, the Format method will return:
  - number + “ Fibonacci!” when the number is a Fibonacci number,
  - number + “ Fizz” when the number is divisible by 3 and not a Fibonacci number,
  - number + “ Buzz” when the number is divisible by 5 and not a Fibonacci number,
  - number + “ FizzBuzz” when the number is divisible by 3 and 5 and not a Fibonacci number.
- Use the PrintRange method of the new class to print a range from 1 to 100 with each entry formatted by
the Format method.
- In all cases and classes:
  - Neither the Fibonacci numbers nor numbers divisible 3 or 5 may be manually listed. They must
be determined via a formula or a test of some kind.
  - Each output of the Format method must be printed on its own line.
  - Any programming language may be used with the only caveat that it must support OOP.
- Please save the code in a .txt file and make a note at the beginning of the file stating which programming
language was used, otherwise the email system may flag your email as spam.
- The submitted code must be your own work.
- It is not permitted to use any code examples of FizzBuzz or Fibonacci numbers from any external source.
- It is permitted to look up the definition of Fibonacci numbers.
- It is also permitted to consult with any resources concerning the syntax of the programming language
used for this challenge.
- No pseudocode.
- Your code must run without any errors.

- Sample Output of the last class (starting at number: 20):
..., 20 Buzz, 21 Fibonacci!, 22, 23, 24 Fizz, 25 Buzz, 26, 27 Fizz, 28, 29, 30 FizzBuzz,...
