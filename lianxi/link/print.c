#include <stdio.h>

struct node
{
    int number;
    char name[20];
    struct node *next;
};
typedef struct node V_NODE;

int main(int argc, const char *argv[])
{
    V_NODE *ptr = NULL;
    V_NODE stu;
    ptr = &stu;

    printf("Please input number:\n");
    scanf("%d", &ptr->number);
    printf("name:\n");
    scanf("%s", ptr->name);
    getchar();

    printf("number=%d\tname=%s", ptr->number,ptr->name);
    printf("\n");
    return 0;
}
