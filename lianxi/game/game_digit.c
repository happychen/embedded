#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct right_place
{
    int right;
    int place;
};

int main(int argc, const char *argv[])
{
    int creatDialog(int x, int *p);    

    void rndProduce(int numDft[]);
    struct right_place numCompare(int numDft[], int numln[]);

    int dialog, quitOrContinue, allQuit;
    int numDft[4], numln[4], result[2];
    struct right_place compareBack;

    creatDialog(1, NULL);

    allQuit = 1;
    while(allQuit == 1)
    {
        creatDialog(7, NULL);
        rndProduce(numDft);
        quitOrContinue = 1;
        while(quitOrContinue == 1)
        {
            dialog = 2;
            while(dialog == 2)
            {
                creatDialog(2, numln);
                dialog = creatDialog(3, numln);
            }
            compareBack = numCompare(numDft, numln);
            result[0] = compareBack.right;
            result[1] = compareBack.place;
            quitOrContinue = creatDialog(4, result);
        }
        if(quitOrContinue == 2)
            allQuit = creatDialog(5, numDft);
        if(quitOrContinue == 3)
            allQuit = 1;
        if(quitOrContinue == 4)
            allQuit = 2;
    }
    if(allQuit == 2)
    creatDialog(6, NULL);

    getchar();
    return 0;
}

int creatDialog(int x, int *p)
{
    int back;
    int i;
    switch(x)
    {
        case 0:
                printf("**************************\n");
                break;
        case 1:
                creatDialog(0, NULL);
                printf("Welcome to play the game!\n");
                creatDialog(0,  NULL);
                printf("In the game,you need to input four number\n");
                break;
        case 2 :
                creatDialog(0, NULL);
                printf("Please input 4 numbers:\n");
                    for(i = 0; i < 4; i++, p++)
                        scanf("%i", p);
                break;
        case 3:
                creatDialog(0, NULL);
                printf("You input numbers are:%i%i%i%i,确认输入“1”,重新输入按“2”.\n", *p, *(p+1), *(p+2), *(p+3));
                scanf("%i", &back);
                return back;
                break;
        case 4:
                creatDialog(0, NULL);
                printf("你输入的数字中：\n数值和位置都正确的有%i个，\n数值正确但位置不对的有%i个。\n", *p, *(p+1));
                if((*p) == 4)
                {
                    printf("恭喜你答对了！\n");
                    printf("继续游戏吗？继续按1，退出按2。\n");
                    scanf("%i", &back);
                    if(back == 1)
                        return 3;
                    if(back == 2)
                        return 4;
                }
                else
                {
                    printf("继续吗？继续按1，显示正确答案按2。\n");
                    scanf("%i", &back);
                    return back;
                }
                break;
        case 5 :
                creatDialog(0, NULL);
                printf("正确答案是：%i%i%i%i,再接再厉啊！\n", *p, *(p+1), *(p+2), *(p+3));
                printf("继续游戏吗？继续按1，退出按2。\n");
                scanf("%i", &back);
                return back;
                break;
        case 6 :
                creatDialog(0, NULL);
                printf("感谢你玩本游戏，再见！\n按任意健退出\n");
        case 7 :
                creatDialog(0, NULL);
                printf("新的游戏开始了！Good luck!\n");
                break;
        default :
                break;
    }
}

void rndProduce(int numDft[])
{
    int i;
    srand((unsigned)time(NULL));
    for(i = 0; i < 4; i++)
        numDft[i] = rand()%10;
}
struct right_place numCompare(int numDft[], int numln[]) 
{
    int i, j;
    struct{int Dft; int ln;} flag[4] = {1, 1, 1, 1, 1, 1, 1, 1};
    struct right_place result = {0, 0};
    for (i = 0; i < 4; i++) 
    {
        if(numDft[i] == numln[i])
        {
            (result.right)++;
            flag[i].Dft = 0;
            flag[i].ln = 0;
        }
    }
    for (i = 0; i < 4; i++) 
    {
        for (j = 0; j < 4; j++) 
        {
            if(flag[i].Dft && flag[j].ln && numDft[i] == numln[j])
            {
                (result.place)++;
                flag[i].Dft = 0;
                flag[j].Dft = 0;
            }
        }
    }
    return result;
}

