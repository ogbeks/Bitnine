#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int (*func)(int, int);
    int arg1;
    int arg2;
} Node;

int add(int x, int y) {
    return x + y;
}

int mul(int x, int y) {
    return x * y;
}

int sub(int x, int y) {
    return x - y;
}

int fibo(int n, int nothing ) {
    if (n <= 1)
        return n;
    else
        return fibo(n - 1, 0) + fibo(n - 2,0);
}

Node* makeFunc(int (*func)(int, int), int arg1, int arg2) {
    Node* node = malloc(sizeof(Node));
    node->func = func;
    node->arg1 = arg1;
    node->arg2 = arg2;
    return node;
}

void calc(Node* node) {
    int result = node->func(node->arg1, node->arg2);
    printf("%d : %d\n", node->arg1, result);
}

int main() {
    Node* addNode = makeFunc(&add, 10, 6);
    Node* mulNode = makeFunc(&mul, 5, 4);
    int mulResult = mulNode->func(mulNode->arg1, mulNode->arg2);
    int addResult = addNode->func(addNode->arg1, addNode->arg2);
    Node* subNode = makeFunc(&sub, mulResult, addResult);
    Node* fiboNode = makeFunc(&fibo, subNode->func(subNode->arg1, subNode->arg2), 0);
    
    calc(addNode);
    calc(mulNode);
    calc(subNode);
    calc(fiboNode);
    
    free(addNode);
    free(mulNode);
    free(subNode);
    free(fiboNode);
    
    return 0;
}
