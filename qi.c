#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char arr[3][3];

void show();
void player1(int x,int y);
void player2(int x,int y);
int winer(char (*p)[3]);
int dogfall(char (*p)[3]);

int main()
{
    memset(arr,' ',sizeof(arr));
    show();
    int x,y,cont=0,flag;
    while(1)
    {
        printf("play1 set:\n");
        scanf("%d%d",&x,&y);
        player1(x,y);
        cont = winer(arr);
        show();
        if(cont == 1)
        {
            break;
        }
        if(dogfall==1)
        {
            printf("time is over,dogfall\n");
            break;
        }
        system("");
        printf("play2 set:\n");
        scanf("%d%d",&x,&y);
        player2(x,y);
        cont = winer(arr);
        show();
        if(cont == 1)
        {
            break;
        }
        system("");
    }
    return 0;
}

void show()
{
    int i;
    printf("-------\n");
    for(i=0;i<3;i++)
    {
        printf("|%c|%c|%c|\n",arr[i][0],arr[i][1],arr[i][2]);
        printf("-------\n");
    }
}

void player1(int x,int y)
{
    int flag=0;
        if(arr[x][y] != ' ')
            {
                printf("input error,please input again\n");
                scanf("%d%d",&x,&y);
                player1(x,y);
            }
        if(arr[x][y] = ' ')
        {
            arr[x][y] = 'x';
            flag=1;
        }
}

void player2(int x,int y)
{
        if(arr[x][y] != ' ')
        {
            printf("input error,please input again:\n");
            scanf("%d%d",&x,&y);
            player2(x,y);
        }
        if (arr[x][y] = ' ')
        {
            arr[x][y] = 'o';
           
        }
}

int winer(char (*p)[3])
{   
    int cont=0,i;
    for(i=0;i<3;i++)
    {
        if(p[i][0] == p[i][1] && p[i][0] == p[i][2] && p[i][0] != ' ') //每一行全部相等
        {
            if(p[i][0] == 'x')
            {
                printf("player1 is winer\n");
            }
            if(p[i][0] == 'o')
            {
                printf("player2 is winer\n");
            }
        cont=1;
        }
    }
    for(i=0;i<3;i++)
    {
        if(p[0][i] == p[1][i] && p[0][i] == p[2][i] && p[0][i] != ' ') //每一行全部相等
        {
            if(p[0][i] == 'x')
            {
                printf("player1 is winer\n");
            }
            if(p[0][i] == 'o')
            {
                printf("player2 is winer\n");
            }
        cont=1;
        }
    }
    if(p[0][0] == p[1][1] && p[0][0] == p[2][2] && p[0][0] != ' ') //第一条对角线全部相等
    {
        if(p[0][0] == 'x')
        {
            printf("player1 is winer\n");
        }
        if(p[0][0] == 'o')
        {
            printf("player2 is winer\n");
        }
        cont=1;
    }
    if(p[0][2] == p[1][1] && p[0][2] == p[2][0] && p[0][2] !=' ') //第二条对角线全部相等
    {
        if(p[0][2] == 'x')
        {
            printf("player1 is winer\n");
        }
        if(p[0][2] == 'o')
        {
            printf("player2 is winer\n");
        }
        cont=1;
    }
    return cont;
}

int dogfall(char (*p)[3])
{
    int i,j,flag=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if((p[i][j] != ' ') && winer == 0 )
            {
                flag=1;
            }
        }
    }
    return flag;
}