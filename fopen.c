V_NODE *load()
{
    FILE *fp;
    int num;
    char na[20];
    V_NODE *head;
    V_NODE *p;

    fp = fopen("text","r+");

    if(fp == NULL)
    {
        perror("malloc");
        exit(0);
    }
    if(fscanf(fp, "%d%s",&num, na) != EOF)
    {
        p = malloc(sizeof(V_NODE));
        if (p == NULL) 
        {
            perror("malloc");
            exit(0);
        }
        p->number = num;
        strcpy(p->name, na);
        p->next = NULL;
        head = p;
    }
    while(fscanf(fp, "%d%s", &num, na) != EOF)
    {
        p->next = malloc(sizeof(V_NODE));
        if (p->next == NULL) 
        {
            perror("malloc");
            exit(0);
        }
        p->next->number = num;
        strcpy(p->next->name, na);
        p->next->next = NULL;
        p = p->next;
    }
}
