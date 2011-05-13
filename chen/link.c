#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    int number;
    char name[20];
    struct node *next;
};
typedef struct node V_NODE;

V_NODE *creat_link(n)
{
    V_NODE *p = NULL;
    V_NODE *head = NULL;

    int i = 0;
    p = head = malloc(sizeof(V_NODE)); 
    if (p == NULL) 
    {
        perror("malloc");
        exit(0);
    }

    p->number = 0;
    strcpy(p->name, "fei");
    p->next = NULL;
    for (i = 0; i < n; i++) 
    {
        p->next = malloc(sizeof(V_NODE));
        if (p->next == NULL) 
        {
            perror("malloc");
            exit(0);
        }

        p->next->number = i+1;
        strcpy(p->next->name, "chen");
        p->next->next = NULL;
        p = p->next;
    }

    return head;
}
V_NODE *add_link(V_NODE *head)
{
    V_NODE *p = NULL;
    V_NODE *ptr = head;
    p = malloc(sizeof(V_NODE));
    if (p == NULL) 
    {
        perror("malloc");
        exit(0);
    }
    printf("Input link's number:\n");
    scanf("%d", &p->number);
    printf("Please input link's name:\n");
    scanf("%s", p->name);
    p->next = NULL;
    if (ptr == NULL) 
    {
        return p;
    }
    if (p->number < ptr->number) 
    {
        p->next = ptr;
        head = p;
    }
    while((ptr->next != NULL) && (p->number > ptr->next->number))
    {
        ptr = ptr->next;
    }
    p->next = ptr->next;
    ptr->next = p;
    return head;
}
V_NODE *dele_link()
{
    V_NODE *p = head;
    V_NODE *ptr = NULL;
    int num = 0;
    printf("Please input link's number to delete:\n");
    scanf("%d", &num);

}
void print_link(V_NODE *p)
{
    while(p != NULL)
    {
        printf("%d\t%s\n", p->number, p->name);
        p = p->next;
    }
}
int main(int argc, const char *argv[])
{
    V_NODE *head;
    int n = 0;
    printf("Please input a number:\n");
    scanf("%d", &n);
    head = creat_link(n);
    print_link(head);
    head = add_link(head);
    print_link(head);
    return 0;
}
