#include "StudentStack.h"

int main() {
    StudentStack stack;

    stack.push(Student(2015130007, "hong", "Department of Computer Engineering"));
    stack.push(Student(2015130100, "lee", "Department of Mechanical Engineering"));
    stack.push(Student(2015130135, "hwang", "Department of Law"));

    stack.display();

    stack.pop();

    stack.display();

    return 0;
}