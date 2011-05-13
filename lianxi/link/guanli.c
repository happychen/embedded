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

void print_link(V_NODE *p);
void *add_link(V_NODE *p);
void *del_link(V_NODE *head);

void *create_link(int n);

int main(int argc, const char *argv[])
{
    V_NODE *head;
    int n = 0;

    printf("Please input a number:\n");
    scanf("%d", &n);
    head = create_link(n);
    print_link(head);
    add_link(head);
    print_link(head);
    del_link(head);
    print_link(head);
    return 0;
}
void *create_link(int n)
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
    strcpy(p->name, "chen");
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
        strcpy(p->next->name, "fei");
        p->next->next = NULL;
        p = p->next;
    }
    return head;
}
void print_link(V_NODE *p)
{
    while(p != NULL)
    {
        printf("%d\t%s\n", p->number, p->name);
        p = p->next;
    }
}
void *add_link(V_NODE *head)
{
    V_NODE *p = NULL;
    V_NODE *ptr = head;

    p = malloc(sizeof(V_NODE));
    if(p == NULL)
    {
        perror("malloc");
        exit(0);
    }
    printf("where input a number:\n");
    scanf("%d", &p->number);
    printf("Input link's name:\n");
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
        return head;
    }
    
    while((ptr->next != NULL) && (p->number > ptr->next->number))
    {
        ptr = ptr->next;
    }

    p->next = ptr->next;
    ptr->next = p;
    return head;
}

void *del_link(V_NODE *head)
{
    V_NODE *p = head;
    V_NODE *ptr = NULL;
    int num = 0;

    if (p == NULL) 
    {
        printf("empty link\n");
        return NULL;
    }
    
    printf("which number delete:\n");
    scanf("%d", &num);
    if (num == head->number) 
    {
        head = head->next;
        free(p);
        return head;
    }
    
    while((p->next != NULL) && (p->next->number != num))
    {
        p = p->next;
    }
    if (p->next == NULL) 
    {
        printf("No number match!\n");
    }
    else
    {
        ptr = p->next;
        p->next = p->next->next;
        free(ptr);
    }
    return head;
}
