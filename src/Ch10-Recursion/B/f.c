#include <stdio.h>

// There are three pegs labeled A, B and C. 
// Four disks are placed on a peg A. The 
// bottom-most disk is largest, and disks
// go on decreasing in size with the topmost
// disk being smallest the objective of the
// game is to move the disks from peg A to
// peg C using peg B as an auxiliary peg,

// The rules of the game are as follows:
// - Only one disk may be moved at a time,
//   and it must be thee top disk on one of the pegs.
// - A largr disk should never be placed on
//   the top of a smaller disk.

// Write a program to print the sequence in
// which the disks should be moved such that
// all disks on peg A are finally transferred to peg C. 

/* ******************************************* */

// This is the *Towers of Henoi* problem
// explanation:
//   to move 2 discs from peg A to peg C, we need
//   to move topmost disc to Tower B, and then move 
//   the other disc to Tower C

//   to move 3 discs from peg A to peg C, we need
//   to move above two discs to Tower B, and
//   then move the bottom disc to tower c, 
//   and the tower of 2 to disc c
int steps = 0;

void towersOfHenoi(int n_discs, char from, char through, char to) {
    // number of discs => n_discs
    // tower A (from), tower B (using), tower C (to)

    if ( n_discs <= 0 )
        return;

    towersOfHenoi(n_discs - 1, from, to, through);
    printf("Move 1 disc from tower '%c' to tower '%c'\n", from, to);
    steps += 1;
    towersOfHenoi(n_discs - 1, through, from, to);
}

int main(void) {
    int n_discs = 4;
    towersOfHenoi(n_discs, 'A', 'B', 'C');

    printf("Total steps: %d\n", steps);
}
