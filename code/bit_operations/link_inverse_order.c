/*将一个链表逆序排列
 * */
#include <stdio.h>
#include <malloc.h>

struct stu
{
    int num;
    struct stu *next;
};
int main(int argc, const char *argv[])
{
    int len = 1;
    int i = 0;
    struct stu *p1, *p2, *head, *new, *newhead;
    p1 = p2 = head = (struct stu *)malloc(sizeof(struct stu));

    printf("input number(0: list end):\n");
    scanf("%d", &p1->num);
    
    while(p1->num != 0)
    {
        p1 = (struct stu *) malloc (sizeof(struct stu));
        printf("input number(0: list end):\n");
        scanf("%d", &p1->num);
        if (p1->num == 0) 
        {
            p2->next = NULL;
        }
        else
        {
            p2->next = p1;
            p2 = p1;
            len++;
        }
    }
    p1 = head;
    printf("\nnoriginal list :\n");
    do
    {
        printf("%4d", p1->num);
        if (p1->next != NULL) 
        {
            p1 = p1->next;
        }
    }while(p1->next != NULL);
    printf("%4d", p1->num);

    for (i = 0; i < len; i++) 
    {
        p2 = p1 =head;
        while(p1->next != NULL)
        {
            p2 = p1;
            p1 = p1->next;
        }
        if (i == 0) 
        {
            newhead = new = p1;
        }
        else
        {
            new = new->next = p1;
        }
        p2->next = NULL;
    }
    printf("\nnew list:\n");
    p1 = newhead;
    for (i = 0; i < len; i++) 
    {
        printf("%4d", p1->num);
        p1 = p1->next;
    }
    printf("\n");
    return 0;
}
