# Rock Paper Scissor

[refer to geeksforgeeks](https://www.geeksforgeeks.org/rock-paper-scissor-in-c/)

Is a hand game and played between two people.

## Description
- Rock vs Paper -> Paper wins.
- Rock vs Scissor -> Rock wins.
- Paper vs Scissor -> Scissor wins.
- Draw.

## Implementation

- `main.c`
  - It consisits of the declaration of the variables.
  - `printf()` and `scanf()`
  - `srand()` and `rand()`
  - Take modulo of random number generated with 100 to make its range between (0 and 100).
  - 0-33 is Stone
  - 34-66 is Paper
  - 67-100 is Scissor

- `game()`
  - This function consisits of if-else statements that will compare the choice of user and computeder.
  - user wins return 1
  - computer wins return 0
