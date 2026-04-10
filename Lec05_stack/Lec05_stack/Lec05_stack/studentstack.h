#pragma once
#include "Student.h"

#define MAX_STACK_SIZE 100

class StudentStack {
    int top;   
    Student data[MAX_STACK_SIZE];

public:
    StudentStack() { top = -1; }

    bool isEmpty() const { return top == -1; }
    bool isFull() const { return top == MAX_STACK_SIZE - 1; }

    void push(Student e) {
        if (isFull()) {
            printf("stack saturation error\n");
            return;
        }
        data[++top] = e;
    }

    Student pop() {
        if (isEmpty()) {
            printf("stack gap error\n");
            return Student();
        }
        return data[top--];
    }

    Student peek() const {
        if (isEmpty()) {
            printf("stack gap error\n");
            return Student();
        }
        return data[top];
    }

    void display() const {
        printf("[stack number of items = %2d] ==> \n", top + 1);
        for (int i = 0; i <= top; i++) {
            data[i].display();
        }
        printf("\n");
    }
};