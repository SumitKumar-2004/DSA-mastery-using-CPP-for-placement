/*
Why XOR?

XOR is one of the most important operators in placements.

It is used in:

LeetCode 136 - Single Number
LeetCode 268 - Missing Number
Swap without third variable
Finding two unique numbers
First Understand XOR

XOR is represented by

^
XOR Truth Table
A	B	A ^ B
0	0	0
0	1	1
1	0	1
1	1	0
Rule 1
Same bits → 0

Examples

0 ^ 0 = 0

1 ^ 1 = 0
Rule 2
Different bits → 1

Examples

0 ^ 1 = 1

1 ^ 0 = 1
Example 1
5 ^ 3

Convert to binary.

5 = 101

3 = 011

XOR

101

011

---

110

Binary

110

Decimal

6

Answer

5 ^ 3 = 6
Example 2
7 ^ 7

Binary

111

111

---

000

Answer

0
Most Important Properties
Property 1
a ^ a = 0

Example

10 ^ 10 = 0

25 ^ 25 = 0
Property 2
a ^ 0 = a

Example
9 ^ 0 = 9
25 ^ 0 = 25
Property 3
a ^ b ^ a
becomes
(a ^ a) ^ b
↓
0 ^ b
↓
b
This property is the foundation of LeetCode 136.

*/