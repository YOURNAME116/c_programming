#include <stdio.h>

int main() {
    int l, b, area;
    printf("Enter the length of a rectangle: ");
    scanf("%d", &l);
    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &b);
    area = l * b;
    printf("Area of the rectangle is %d", area);
    return 0;
}
