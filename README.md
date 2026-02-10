*This project has been created as part of the 42 curriculum by bpavlows*

# PUSH_SWAP
## Project push_swap / Milestone 2 / 42 Porto

![Demo with 500 numbers](https://github.com/user-attachments/assets/56e1287c-9fad-41c7-89de-8ba7e6f1414e)

![Demo with 100 numbers](https://github.com/user-attachments/assets/06a12503-7ec0-4f2c-aae4-723df53ca74a)

### Description
The `push_swap` project is a very simple and highly effective algorithm project: data must be sorted.
You have at your disposal a set of integer values, 2 stacks, and a set of instructions to manipulate both stacks.

The goal? Write a program in C called `push_swap` which calculates and displays on the standard output the smallest program, made of Push Swap language instructions, that sorts the integers received as arguments.

**The Challenge:**
- Use the lowest possible number of moves.
- Handle complex error management (non-integers, duplicates, overflow).
- Sort 100 numbers in < 700 moves.
- Sort 500 numbers in < 5500 moves.

### Operations
| Code  | Instruction                         | Action                                                 |
| ----- | ----------------------------------- | ------------------------------------------------------ |
| `sa`  | swap a                              | Swap the first 2 elements at the top of stack A.       |
| `sb`  | swap b                              | Swap the first 2 elements at the top of stack B.       |
| `ss`  | swap a + swap b                     | `sa` and `sb` at the same time.                        |
| `pa`  | push a                              | Take the first element at the top of B and put it at the top of A. |
| `pb`  | push b                              | Take the first element at the top of A and put it at the top of B. |
| `ra`  | rotate a                            | Shift up all elements of stack A by 1.                 |
| `rb`  | rotate b                            | Shift up all elements of stack B by 1.                 |
| `rr`  | rotate a + rotate b                 | `ra` and `rb` at the same time.                        |
| `rra` | reverse rotate a                    | Shift down all elements of stack A by 1.               |
| `rrb` | reverse rotate b                    | Shift down all elements of stack B by 1.               |
| `rrr` | reverse rotate a + reverse rotate b | `rra` and `rrb` at the same time.                      |

### Logic & Algorithm
This project uses a **Greedy Algorithm** (often referred to as the "Turk Algorithm" in the 42 community).

**The Core Concept: Cost Analysis**
Instead of thinking about the whole list, the algorithm decides the next move based on the immediate "cost" of moving each element.
1. Each number in Stack A calculates: "How many moves would it take to get me to the correct position in Stack B?"
2. The algorithm compares the cost of all numbers.
3. The number with the **cheapest cost** is chosen and moved.

**The Steps:**
1. **Push to B:** Move all numbers from Stack A to Stack B, leaving only 3 numbers in A. (Pre-sorting can be applied here).
2. **Sort Three:** Easily sort the remaining 3 numbers in Stack A.
3. **Calculate Costs:** For every node in Stack B, calculate the cost to push it back to the correct spot in Stack A.
   - Cost includes rotations needed in both stacks (`ra`, `rb`, `rr`, `rra`, `rrb`, `rrr`).
4. **Move Cheapest:** Execute the move for the element with the lowest cost.
5. **Repeat:** Do this until Stack B is empty.
6. **Final Adjust:** Rotate Stack A until the smallest number is at the top.

**Data Structure:**
I used a **Doubly Linked List** to store the stacks. This allows easy access to the `next` and `prev` nodes, which is crucial for calculating the cost of reverse rotations (`rra`/`rrb`).

### Instructions
**1. Compilation**
To compile the program, run the Makefile:
```bash
make
```
Run the program passing a list of integers as arguments
```bash
./push_swap <value1> <value2> <value3> ... <valueN>
```
If you need 100 random values:
```bash
ARG=$(shuf -i 1-100 | tr '\n' ' '); ./push_swap $ARG
```
or 500 values:
```bash
ARG=$(shuf -i 1-500 | tr '\n' ' '); ./push_swap $ARG
```


Output
* The program will output the list of operations needed to sort the list.

Erros: The program handles errors such as:
* Non-numeric arguments.
```bash
./push_swap 5 4 3 * 2 1
```
or:
```bash
./push_swap 5 4 3 i 2 1
```
* Duplicate numbers.
```bash
./push_swap 5 4 3 1 2 1
```
* Numbers greater than INT_MAX or smaller than INT_MIN.
```bash
./push_swap 5 4 2147483648
```
or:
```bash
./push_swap 5 4 -2147483649
```

* If you need check using the checker_linux, use:
```bash
ARG=$(5, 3, 4, 1, 2); ./push_swap $ARG | checker_linux $ARG
```

* If you need to use the Valgrind:
```bash
valgrind ./push_swap 5 4 1 2 3
```

* For check the number of movements:
```bash
./push_swap 5 4 1 2 3 | wc -l
```

### References
Books: 
* Grokking Algorithms - Aditya Y. Bhargava
* Language C - Luis Damas

Websites: 
* [Guide Gitbook](https://42-cursus.gitbook.io/guide/2-rank-02/push_swap)
* [Linked List](https://www.geeksforgeeks.org/c/linked-list-in-c/)

GitHub with Guides:
* [Beatriz Dile](https://github.com/beatrizdile/42sp-push_swap)
* [Jhonata Gonçalves](https://github.com/SopadeGalinha/42-Push_Swap/tree/master)
* [Carolina Daniel](https://github.com/caroldaniel/42sp-cursus-push_swap/tree/master)

Medium Blog Pages:
* [A. Yigit Ogun](https://medium.com/@ayogun/push-swap-c1f5d2d41e97)
* [Jamie Dawson](https://medium.com/@jamierobertdawson/push-swap-the-least-amount-of-moves-with-two-stacks-d1e76a71789a)
* [Yutong Deng](https://pure-forest.medium.com/push-swap-turk-algorithm-explained-in-6-steps-4c6650a458c0)

Visualizer:
* [Emmanuel Ruaud](https://github.com/o-reo/push_swap_visualizer)

Wikipedia:
* [Algorithms](https://en.wikipedia.org/wiki/Analysis_of_algorithms)
* [Stack](https://en.wikipedia.org/wiki/Stack_(abstract_data_type))
* [Benchmark](https://en.wikipedia.org/wiki/Benchmark_(computing))

AI:
Gemini for learning sorts algorithms and linked lists, and how implement this on my code. 

