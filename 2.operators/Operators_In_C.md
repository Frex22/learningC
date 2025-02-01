2. Operators and Expressions in C
2.1. What Are Operators and Expressions?
Operators are symbols that tell the compiler to perform specific operations on one or more operands (variables or values).
Expressions are combinations of operators and operands that the compiler evaluates to produce another value.
Example of an Expression:

int result = (a + b) * c;
Here, + and * are operators, and a, b, and c are operands. The entire (a + b) * c is an expression.

2.2. Types of Operators in C
C provides a rich set of operators categorized based on their functionality:

Arithmetic Operators
Relational Operators
Logical Operators
Bitwise Operators
Assignment Operators
Increment and Decrement Operators
Conditional (Ternary) Operator
Comma Operator
Sizeof Operator
Pointer Operators
We'll explore each category in detail.

2.2.1. Arithmetic Operators
Used to perform mathematical calculations.

Operator	Description	Example
+	Addition	a + b
-	Subtraction	a - b
*	Multiplication	a * b
/	Division	a / b
%	Modulus (Remainder after division)	a % b
Example:

#include <stdio.h>
int main() {
    int a = 10, b = 3;
    int sum, difference, product, quotient, remainder;

    sum = a + b;           // 13
    difference = a - b;    // 7
    product = a * b;       // 30
    quotient = a / b;      // 3
    remainder = a % b;     // 1

    printf("a = %d, b = %d\n", a, b);
    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);
    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d\n", remainder);

    return 0;
}
Output:

makefile
Copy
a = 10, b = 3
Sum = 13
Difference = 7
Product = 30
Quotient = 3
Remainder = 1
Notes:

Integer Division: When both operands are integers, the division operator / performs integer division, truncating any decimal part.
Floating-Point Division: If at least one operand is a floating-point type (float, double), the division will yield a floating-point result.
Example of Floating-Point Division:

c
Copy
float x = 10.0, y = 3.0;
float result = x / y; // 3.333333
2.2.2. Relational Operators
Used to compare two values. The result of a relational operation is either 1 (true) or 0 (false).

Operator	Description	Example
==	Equal to	a == b
!=	Not equal to	a != b
>	Greater than	a > b
<	Less than	a < b
>=	Greater than or equal to	a >= b
<=	Less than or equal to	a <= b
Example:

c
Copy
#include <stdio.h>

int main() {
    int a = 5, b = 10;

    printf("a == b: %d\n", a == b); // 0
    printf("a != b: %d\n", a != b); // 1
    printf("a > b: %d\n", a > b);   // 0
    printf("a < b: %d\n", a < b);   // 1
    printf("a >= b: %d\n", a >= b); // 0
    printf("a <= b: %d\n", a <= b); // 1

    return 0;
}
Output:

less
Copy
a == b: 0
a != b: 1
a > b: 0
a < b: 1
a >= b: 0
a <= b: 1
2.2.3. Logical Operators
Used to combine multiple conditions.

Operator	Description	Example
&&	Logical AND	a && b
`		`
!	Logical NOT	!a
Example:

c
Copy
#include <stdio.h>

int main() {
    int a = 5, b = 10, c = 5;

    // Logical AND
    printf("(a == c) && (a < b): %d\n", (a == c) && (a < b)); // 1

    // Logical OR
    printf("(a == c) || (a > b): %d\n", (a == c) || (a > b)); // 1

    // Logical NOT
    printf("!(a == b): %d\n", !(a == b)); // 1

    return 0;
}
Output:

css
Copy
(a == c) && (a < b): 1
(a == c) || (a > b): 1
!(a == b): 1
Short-Circuit Behavior:

&& Operator: If the first operand is 0 (false), the second operand is not evaluated.
|| Operator: If the first operand is non-zero (true), the second operand is not evaluated.
2.2.4. Bitwise Operators
Operate on the binary representations of integers.

Operator	Description	Example
&	Bitwise AND	a & b
`	`	Bitwise OR
^	Bitwise XOR	a ^ b
~	Bitwise NOT	~a
<<	Left Shift (shifts bits to the left)	a << 2
>>	Right Shift (shifts bits to the right)	a >> 2
Example:

c
Copy
#include <stdio.h>

int main() {
    unsigned int a = 5;   // Binary: 0101
    unsigned int b = 9;   // Binary: 1001

    printf("a & b: %u\n", a & b); // 1 (0001)
    printf("a | b: %u\n", a | b); // 13 (1101)
    printf("a ^ b: %u\n", a ^ b); // 12 (1100)
    printf("~a: %u\n", ~a);       // 4294967290 (assuming 32-bit unsigned)
    printf("a << 1: %u\n", a << 1); // 10 (1010)
    printf("a >> 1: %u\n", a >> 1); // 2 (0010)

    return 0;
}
Output:

less
Copy
a & b: 1
a | b: 13
a ^ b: 12
~a: 4294967290
a << 1: 10
a >> 1: 2
Notes:

Bitwise AND (&): Sets each bit to 1 if both bits are 1.
Bitwise OR (|): Sets each bit to 1 if at least one of the bits is 1.
Bitwise XOR (^): Sets each bit to 1 if only one of the two bits is 1.
Bitwise NOT (~): Inverts all the bits.
Left Shift (<<): Shifts bits to the left, filling with zeros on the right.
Right Shift (>>): Shifts bits to the right, discarding bits shifted off.
2.2.5. Assignment Operators
Used to assign values to variables. They can also perform operations and assignments in one step.

Operator	Description	Example
=	Simple assignment	a = b
+=	Add and assign	a += b (a = a + b)
-=	Subtract and assign	a -= b
*=	Multiply and assign	a *= b
/=	Divide and assign	a /= b
%=	Modulus and assign	a %= b
<<=	Left shift and assign	a <<= 2
>>=	Right shift and assign	a >>= 2
&=	Bitwise AND and assign	a &= b
`	=`	Bitwise OR and assign
^=	Bitwise XOR and assign	a ^= b
Example:

c
Copy
#include <stdio.h>

int main() {
    int a = 10, b = 5;

    a += b; // a = 15
    printf("a += b: %d\n", a);

    a -= b; // a = 10
    printf("a -= b: %d\n", a);

    a *= b; // a = 50
    printf("a *= b: %d\n", a);

    a /= b; // a = 10
    printf("a /= b: %d\n", a);

    a %= b; // a = 0
    printf("a %%= b: %d\n", a);

    a = 5;
    a <<= 1; // a = 10
    printf("a <<= 1: %d\n", a);

    a >>= 1; // a = 5
    printf("a >>= 1: %d\n", a);

    a &= b; // a = 5
    printf("a &= b: %d\n", a);

    a |= b; // a = 5
    printf("a |= b: %d\n", a);

    a ^= b; // a = 0
    printf("a ^= b: %d\n", a);

    return 0;
}
Output:

less
Copy
a += b: 15
a -= b: 10
a *= b: 50
a /= b: 10
a %= b: 0
a <<= 1: 10
a >>= 1: 5
a &= b: 5
a |= b: 5
a ^= b: 0
2.2.6. Increment and Decrement Operators
Used to increase or decrease a variable's value by 1.

Operator	Description	Example	Equivalent
++a	Pre-increment: increments then uses the value	++a	a = a + 1; then use a
a++	Post-increment: uses the value then increments	a++	use a then a = a + 1;
--a	Pre-decrement: decrements then uses the value	--a	a = a - 1; then use a
a--	Post-decrement: uses the value then decrements	a--	use a then a = a - 1;
Example:

c
Copy
#include <stdio.h>

int main() {
    int a = 5, b;

    // Pre-increment
    b = ++a; // a = 6, b = 6
    printf("After pre-increment: a = %d, b = %d\n", a, b);

    // Post-increment
    a = 5;
    b = a++; // a = 6, b = 5
    printf("After post-increment: a = %d, b = %d\n", a, b);

    // Pre-decrement
    a = 5;
    b = --a; // a = 4, b = 4
    printf("After pre-decrement: a = %d, b = %d\n", a, b);

    // Post-decrement
    a = 5;
    b = a--; // a = 4, b = 5
    printf("After post-decrement: a = %d, b = %d\n", a, b);

    return 0;
}
Output:

less
Copy
After pre-increment: a = 6, b = 6
After post-increment: a = 6, b = 5
After pre-decrement: a = 4, b = 4
After post-decrement: a = 4, b = 5
Use Cases:

Loops: Commonly used in for and while loops to control iteration.
Counters: Incrementing or decrementing counters within loops or algorithms.
2.2.7. Conditional (Ternary) Operator
A shorthand for if-else statements. It takes three operands and is often used to assign a value based on a condition.

Syntax:

c
Copy
condition ? expression_if_true : expression_if_false;
Example:

c
Copy
#include <stdio.h>

int main() {
    int a = 10, b = 20;
    int max;

    // Using ternary operator to find the maximum
    max = (a > b) ? a : b;

    printf("Maximum value is %d\n", max); // 20

    return 0;
}
Output:

csharp
Copy
Maximum value is 20
Equivalent if-else Statement:

c
Copy
if (a > b) {
    max = a;
} else {
    max = b;
}
Notes:

Improves code brevity for simple conditional assignments.
Can be nested for multiple conditions, though it may reduce readability.
2.2.8. Comma Operator
Allows multiple expressions to be evaluated in a single statement. The expressions are evaluated from left to right, and the value of the last expression is returned.

Syntax:

c
Copy
expression1, expression2, ..., expressionN
Example:

c
Copy
#include <stdio.h>

int main() {
    int a, b, c;

    // Using comma operator to initialize variables
    a = (b = 3, c = b + 2); // b = 3, c = 5, a = 5

    printf("a = %d, b = %d, c = %d\n", a, b, c); // 5, 3, 5

    // Using comma operator in for loop
    for (a = 0, b = 10; a < b; a++, b--) {
        printf("a = %d, b = %d\n", a, b);
    }

    return 0;
}
Output:

css
Copy
a = 5, b = 3, c = 5
a = 0, b = 10
a = 1, b = 9
a = 2, b = 8
a = 3, b = 7
a = 4, b = 6
a = 5, b = 5
Notes:

Commonly used in for loops to perform multiple initializations or iterations.
Less commonly used elsewhere due to potential readability issues.
2.2.9. Sizeof Operator
Used to determine the size (in bytes) of a data type or a variable.

Syntax:

c
Copy
sizeof(type);
sizeof(expression);
Example:

c
Copy
#include <stdio.h>

int main() {
    int a;
    double b;
    char c;

    printf("Size of int: %zu bytes\n", sizeof(int));       // Typically 4
    printf("Size of double: %zu bytes\n", sizeof(b));     // Typically 8
    printf("Size of char: %zu byte\n", sizeof(c));        // 1

    printf("Size of a: %zu bytes\n", sizeof(a));          // 4
    printf("Size of b: %zu bytes\n", sizeof(b));          // 8
    printf("Size of c: %zu byte\n", sizeof(c));           // 1

    return 0;
}
Output:

yaml
Copy
Size of int: 4 bytes
Size of double: 8 bytes
Size of char: 1 byte
Size of a: 4 bytes
Size of b: 8 bytes
Size of c: 1 byte
Notes:

The size of data types may vary based on the system and compiler.
Useful for dynamic memory allocation and understanding data storage.
2.2.10. Pointer Operators
Operators related to pointers.

Operator	Description	Example
*	Dereference operator	*ptr
&	Address-of operator	&var
Example:

c
Copy
#include <stdio.h>

int main() {
    int a = 10;
    int *ptr;

    ptr = &a; // ptr holds the address of a

    printf("Value of a: %d\n", a);          // 10
    printf("Address of a: %p\n", (void*)&a); // Address in memory
    printf("Value stored in ptr: %p\n", (void*)ptr); // Same as address of a
    printf("Value pointed to by ptr: %d\n", *ptr); // 10

    // Modifying the value using pointer
    *ptr = 20;
    printf("New value of a: %d\n", a);      // 20

    return 0;
}
Output:

yaml
Copy
Value of a: 10
Address of a: 0x7ffeefbff5ac
Value stored in ptr: 0x7ffeefbff5ac
Value pointed to by ptr: 10
New value of a: 20
Notes:

The & operator retrieves the memory address of a variable.
The * operator accesses or modifies the value at the memory address stored in a pointer.
Pointers are powerful tools for dynamic memory management and efficient data handling.
2.3. Operator Precedence and Associativity
Understanding the order in which operators are evaluated is crucial to writing correct expressions.

Precedence: Determines which operator is evaluated first in an expression with multiple operators.

Associativity: Determines the order of evaluation for operators with the same precedence (left-to-right or right-to-left).

Example:

c
Copy
#include <stdio.h>

int main() {
    int a = 5, b = 3, c = 2;
    int result;

    // Expression: a + b * c
    result = a + b * c; // Multiplication has higher precedence
    printf("a + b * c = %d\n", result); // 11

    // Expression: (a + b) * c
    result = (a + b) * c;
    printf("(a + b) * c = %d\n", result); // 16

    // Expression: a + b + c
    result = a + b + c; // Left-to-right associativity
    printf("a + b + c = %d\n", result); // 10

    // Expression: a = b = c
    a = b = c = 1;
    printf("a = %d, b = %d, c = %d\n", a, b, c); // 1, 1, 1

    return 0;
}
Output: ``a + b * c = 11 (a + b) * c = 16 a + b + c = 10 a = 1, b = 1, c = 1

markdown
Copy

**Reference: Operator Precedence Table**

Here’s a simplified operator precedence table (from highest to lowest). Operators on the same line have the same precedence. Associativity is indicated where applicable.

| Precedence | Operators                                      | Associativity          |
|------------|------------------------------------------------|------------------------|
| 1          | `()`, `[]`, `->`, `.`                           | Left-to-right          |
| 2          | `!`, `~`, `++`, `--`, `+` (unary), `-` (unary), `*` (dereference), `&` (address-of) | Right-to-left |
| 3          | `*`, `/`, `%`                                    | Left-to-right          |
| 4          | `+`, `-`                                         | Left-to-right          |
| 5          | `<<`, `>>`                                       | Left-to-right          |
| 6          | `<`, `<=`, `>`, `>=`                             | Left-to-right          |
| 7          | `==`, `!=`                                       | Left-to-right          |
| 8          | `&` (bitwise AND)                                | Left-to-right          |
| 9          | `^` (bitwise XOR)                                | Left-to-right          |
| 10         | `|` (bitwise OR)                                 | Left-to-right          |
| 11         | `&&` (logical AND)                               | Left-to-right          |
| 12         | `||` (logical OR)                                | Left-to-right          |
| 13         | `?:` (ternary conditional)                       | Right-to-left          |
| 14         | `=`, `+=`, `-=`, `*=`, `/=`, `%=`,...             | Right-to-left          |
| 15         | `,` (comma)                                      | Left-to-right          |

**Tips:**
- Use parentheses `()` to explicitly define the order of operations and improve code readability.
- When in doubt, consult the operator precedence table or use parentheses to avoid ambiguity.

---
