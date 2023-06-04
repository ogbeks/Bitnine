#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int index;
    int value;
    struct Node* next;
} Node;

Node* memo = NULL; // Dynamic memoization cache

int fiboMemorization(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else if (n == 2)
        return 2;

    Node* curr = memo;
    while (curr != NULL) {
        if (curr->index == n) {
            return curr->value; // Return cached result if available
        }
        curr = curr->next;
    }

    int result = fiboMemorization(n - 3) + fiboMemorization(n - 2);

    // Cache the result by adding a new node to the memoization cache
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->index = n;
    newNode->value = result;
    newNode->next = memo;
    memo = newNode;

    return result;
}

void freeMemoizationCache() {
    Node* curr = memo;
    while (curr != NULL) {
        Node* temp = curr;
        curr = curr->next;
        free(temp);
    }
    memo = NULL;
}

int main() {
    int n = 10; // Example: Calculate F(10)

    int result = fiboMemorization(n);
    printf("F(%d) = %d\n", n, result);

    freeMemoizationCache(); // Free the memoization cache after use

    return 0;
}
