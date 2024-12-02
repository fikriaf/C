#include <stdio.h>
#include <stdlib.h>

char intfix[99], postfix[99], stack[99]
int top = -1
char operators[] = "+-*/%^";

int isOperator(char c) {
    char operators[] = "+-*/^";
    for (int i = 0; i < strlen(operators); i++) {
        if (c == operators[i]) {
            return 1;
        }
    }
    return 0;
}

int main()
{
    printf("Input INTFIX : "); scanf(&intfix, "%s");
    for (int i = 0; i < strlen(infix); i++)
    {
        char c = intfix[i]
        if (isOperator(c) == 0 )
        {
            top++;
            intfix[top] = c;
        }
        else if (strcmp(c, "("))
        {
            top++;
            stack[top] = c;
        }
        else if (strcmp(c, ")"))
        {
            while (stack and strcmp(stack[-1], "("))
            {
                intfix[i] = stack[-1]
            }
            top++;
            stack[top] = c;
        }

    }
    return 0;
}
