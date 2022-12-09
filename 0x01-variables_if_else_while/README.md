# 0x01. C - Variables, if, else, while

In this project, I learned keywords and identifires in C, Integers and the difference between (signed - unsigned), Arithmetic Operators, using `if` and `if...else` statements, and
implementing `while` loops.

The tasks in this project was about declaring and defining variables of different types.

I just want to say: ```"Betty, Please have mercy :("``` 

## Description of all the tasks.

* **0. Positive anything is better than negative nothing**
  * [0-positive_or_negative.c](./0-positive_or_negative.c): The program assigns a random value to a variable (n) and checks if it's positive, negative, or zero.
  #### Output
    * The number, followed by
        * if the number is greater than 0: ```is positive```
        * if the number is 0: ```is zero```
        * if the number is less than 0: ```is negative```
    
* **1. The last digit**
  * [1-last_digit.c](./1-last_digit.c): The program will assign a random number to the variable ```n``` each time it is executed and print the last digit of the number stored in the variable ```n```.
  #### Output
    * The ```string Last digit of```, followed by
        * ```n``` followed by
        * the string ```is``` followed by
            * if the last digit of ```n``` is greater than 5: the string ```and is greater than 5``` 
            * if the last digit of ```n``` is 0: the string ```and is 0```
            * if the last digit of ```n``` is less than 6 and not 0: the string ```and is less than 6 and not 0```

    
* **2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game**
  * [2-print_alphabet.c](./2-print_alphabet.c): Write a program that prints the alphabet in lowercase, followed by a new line. 

* **3. When I was having that alphabet soup, I never thought that it would pay off**
  * [3-print_alphabets.c](./3-print_alphabets.c): Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line. `putchar` only allowed.

* **4. alphABET**
  * [4-print_alphabt.c](./4-print_alphabt.c): Write a program that prints the alphabet in lowercase, followed by a new line.

    * Print all the letters except `q` and `e`
    * You can only use `putchar` twice in your code
* **5. Numbers**
  * [5-print_numbers.c](./5-print_numbers.c): Write a program that prints all single digit numbers of base `10` starting from `0`, followed by a new line.

    * All your code should be in the main function
* **6. Numberz**
  * [6-print_numberz.c](./6-print_numberz.c): Write a program that prints all single digit numbers of base 10 starting from `0`, followed by a new line.

    * You are not allowed to use any variable of type `char`
    * You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
    * You can only use `putchar` twice in your code
* **7. Smile in the mirror**
  * [7-print_tebahpla.c](./7-print_tebahpla.c): Write a program that prints the lowercase alphabet in reverse, followed by a new line.

    * You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
    * You can only use `putchar` twice in your code
* **8. Hexadecimal**
  * [8-print_base16.c](./8-print_base16.c): Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.

    * You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
    * All your code should be in the `main` function
    * You can only use `putchar` three times in your code

* **9. Patience, persistence and perspiration make an unbeatable combination for success**
  * [9-print_comb.c](./9-print_comb.c): CWrite a program that prints all possible combinations of single-digit numbers. Using only the `putchar` function exactly four times without any
  variables of type `char`:
    * Numbers are separated by `,`, followed by a space.
    * Numbers are printed in ascending order.

* **10. 00...99**
  * [10-print_comb2.c](./10-print_comb2.c): Write a program that prints all possible different combinations of two digits.
    * Numbers are separated by `,`, followed by a space.
    * Numbers are printed in ascending order, with two digits.

* **11. Inventing is a combination of brains and materials. The more brains you use, the less material you need**
  * [100-print_comb3.c](./100-print_comb3.c): Write a program that prints all possible different combinations of three digits.
    * Numbers are separated by `,`, followed by a space.
    * The two digits are different.
    * `012`, `120`, `102`, `021`, `201`, `210` are considered the same combination of the three digits `0`, `1` and `2`
    * Prints only the smallest combination of two digits.
    * Numbers are printed in ascending order.

* **12. The success combination in business is: Do what you do better... and: do more of what you do...**
  * [101-print_comb4.c](./101-print_comb4.c): The program that prints all possible different
  combinations of three digits using only the `putchar` and can't use any variables of type `char`:
    * Numbers are separated by `,`, followed by a space.
    * The three digits are different.
    * `012`, `120`, `102`, `021`, `201` and `210` are considered the same combination of the three digits `0`, `1` and `2`.
    * Prints only the smallest combination of three digits.
    * Numbers are printed in ascending order.

* **13. Software is eating the World**
  * [102-print_comb5.c](./102-print_comb5.c): The program prints all possible combinations
  of two-digit numbers using only the `putchar` function exactly `eight` times without any
  variables of type `char`:
    * Numbers range from `0` to `99`.
    * Two numbers are separated by a space.
    * Numbers are printed with two digits [ie. `1` is printed as `01`].
    * `00 01` and `01 00` are considered the same as the combination of of the numbers `0` and `1`.
    * Combinations of numbers are separated by `,`, followed by a space.
    * Combinations of numbers are printed in ascending order.
