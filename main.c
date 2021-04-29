#include <stdio.h>
#include <stdlib.h>

void display(int left1[],int right1[],int left2[],int right2[]);
void insert(int left1[],int right1[],int left2[],int right2[]);
void deleet(int left1[],int right1[],int left2[],int right2[]);
void reset(int left1[],int right1[],int left2[],int right2[]);



int main()
{
    int left1[25]={0};
    int right1[25]={0};
    int left2[25]={0};
    int right2[25]={0};

    while(1)
    {
        printf("\n1. display places\n");
        printf("2. car arrived\n");
        printf("3. car left\n");
        printf("4. Reset\n");
        printf("5. quit\n\n");
        int choice;

        printf("Enter your choice: ");scanf("%d",&choice);

         if(choice==5)
            break;
 switch(choice)
        {
            case 1:display(left1,right1,left2,right2);break;
            case 2:insert(left1,right1,left2,right2);break;
            case 3:deleet(left1,right1,left2,right2);break;
            case 4:reset(left1,right1,left2,right2);break;
        }

    }
return 0;
}
void display(int left1[],int right1[],int left2[],int right2[])
{
    int i;
    printf("\n%s%15s\t\t|\t\t%s%15s\n\n","left_1","right_1","left_2","right_2");
    for(i=0;i<25;i++)
        printf("%-7d%d%10d%5d\t\t|\t\t%-7d%d%10d%5d\n",i+1,left1[i],i+1,right1[i],i+1,left2[i],i+1,right2[i]);

}
void insert(int left1[],int right1[],int left2[],int right2[])
{
    int floor,place,side,i;
    printf("Enter the number of the floor: ");scanf("%d",&floor);
    printf("1. Left  2. Right: ");scanf("%d",&side);
    printf("Enter the number of the place: ");scanf("%d",&place);

    if(floor==1&&side==1)
    {
      for(i=0;i<25;i++)
      {
          if((i+1)==place)
            left1[i]=1;
      }
    }
    else if(floor==1&&side==2)
    {
      for(i=0;i<25;i++)
      {
          if((i+1)==place)
            right1[i]=1;
      }
    }
    else if(floor==2&&side==1)
    {
      for(i=0;i<25;i++)
      {
          if((i+1)==place)
            left2[i]=1;
      }
    }
    else if(floor==2&&side==2)
    {
      for(i=0;i<25;i++)
      {
          if((i+1)==place)
            right2[i]=1;
      }
    }

}
void deleet(int left1[],int right1[],int left2[],int right2[])
{
    int floor,place,side,i;
    printf("Enter the number of the floor: ");scanf("%d",&floor);
    printf("1. Left  2. Right: ");scanf("%d",&side);
    printf("Enter the number of the place: ");scanf("%d",&place);

    if(floor==1&&side==1)
    {
      for(i=0;i<25;i++)
      {
          if((i+1)==place)
            left1[i]=0;
      }
    }
    else if(floor==1&&side==2)
    {
      for(i=0;i<25;i++)
      {
          if((i+1)==place)
            right1[i]=0;
      }
    }
    else if(floor==2&&side==1)
    {
      for(i=0;i<25;i++)
      {
          if((i+1)==place)
            left2[i]=0;
      }
    }
    else if(floor==2&&side==2)
    {
      for(i=0;i<25;i++)
      {
          if((i+1)==place)
            right2[i]=0;
      }
    }

}
void reset(int left1[],int right1[],int left2[],int right2[])
{
    int i;
    for(i=0;i<25;i++)
    {
    left1[i]=0;
    right1[i]=0;
    left2[i]=0;
    right2[i]=0;
    }

}
