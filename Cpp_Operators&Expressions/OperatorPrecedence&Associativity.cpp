#include<iostream>
using namespace std;
main()
{
	int n1=30,n2=40,n3=10;
	int result=n1+n2*n3/2;
	cout<<"Result : "<<result;
	//first multiply then divide then addition according yo precednce and associativity

}

//| **Precedence** | **Operator**       | **Description**                   | **Associativity** |               |               |
//| -------------- | ------------------ | --------------------------------- | ----------------- | ------------- | ------------- |
//| 1 (Highest)    | `++` `--`          | Increment, Decrement              | Right to Left     |               |               |
//| 2              | `*` `/` `%`        | Multiplication, Division, Modulus | Left to Right     |               |               |
//| 3              | `+` `-`            | Addition, Subtraction             | Left to Right     |               |               |
//| 4              | `<<` `>>`          | Left & Right Shift                | Left to Right     |               |               |
//| 5              | `<` `<=` `>` `>=`  | Relational Operators              | Left to Right     |               |               |
//| 6              | `==` `!=`          | Equality Operators                | Left to Right     |               |               |
//| 7              | `&`                | Bitwise AND                       | Left to Right     |               |               |
//| 8              | `^`                | Bitwise XOR                       | Left to Right     |               |               |
//| 9              | \`                 | \`                                | Bitwise OR        | Left to Right |               |
//| 10             | `&&`               | Logical AND                       | Left to Right     |               |               |
//| 11             | \`                 |                                   | \`                | Logical OR    | Left to Right |
//| 12             | `?:`               | Ternary Conditional               | Right to Left     |               |               |
//| 13 (Lowest)    | `=` `+=` `-=` etc. | Assignment Operators              | Right to Left     |               |               |
