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

void *create_link(int n);
void print_link(V_NODE *p);
void *add_link(V_NODE *head);

int main(int argc, const char *argv[])
{
    V_NODE *head;
    int n = 0;
    printf("Please input a nubmer:\n");
    scanf("%d", &n);
    head = create_link(n);
    print_link(head);
    add_link(head);
    print_link(head);
    return 0;
}
void *create_link(int n)
{
    V_NODE *p = NULL;
    V_NODE *head = NULL;
    p = head = malloc(sizeof(V_NODE));
    if (p == NULL) 
    {
        perror("malloc");
        exit(0);
    }
    p->number = 0;
    strcpy(p->name, "fei");
    p->next = NULL;
    int i = 0;
    for (i = 0; i < n; i++) 
    {
        p->next = malloc(sizeof(V_NODE));
        if(p->next == NULL)
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
void *add_link(V_NODE *head)
{
    V_NODE *p = NULL;
    V_NODE *ptr = head;

    p = malloc(sizeof(V_NODE));
    if (p == NULL) 
    {
        perror("malloc");
        exit(0);
    }
    printf("where input:\n");
    scanf("%d", &p->number);
    printf("name:\n");
    scanf("%s", p->name);
    p->next = NULL;
    if(ptr == NULL)
    {
        return p;
    }
    if (p->number < ptr->number) 
    {
        p->next = ptr;
        head = p;
    }
    while((ptr->next != NULL) && (ptr->next->number < p->number))
    {
        ptr = ptr->next;
    }

    p->next = ptr->next;
    ptr->next = p;
    return head;
}

void print_link(V_NODE *p)
{
    if (p == NULL) 
    {
        printf("empty link.\n");
    }
    while(p != NULL)
    {
        printf("%d\t%s\n", p->number, p->name);
        p = p->next;
    }
}
