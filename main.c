#include <stdio.h>

int main() {
    // Create a variables:
    int first_num;
    int second_num;
    char op;
    int score;
    // after we are get a number and operations
    printf("Write the first number: \n");
    scanf( "%d" , &first_num);
    printf("Write second number: \n");
    scanf( "%d" , &second_num);
    printf("write the operation: \n");
    scanf( " %c" , &op);
    // main count, we get numbers and op, now we count him:

    if (op == '/' && second_num == 0) {
    printf("Zero count error");
    }
      else if (op == '+' ) {
      score = first_num + second_num;
      printf("Result: %d", score);
    }
       else if (op == '*') {
        score = first_num * second_num;
        printf("Result: %d", score);
    }
        else if (op == '-') {
        score = first_num - second_num;
        printf("Result: %d", score);
    }
        else if (op == '/') {
        score = first_num / second_num;
        printf("Result: %d", score);
    }
    else
    printf("Incorrect operation error!");

    return 0;
}
