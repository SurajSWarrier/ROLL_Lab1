# include <stdio.h>

int additionf(int x,int y);
int subtractionf(int x,int y);
int multiplyf(int x,int y);
float dividef(int x,int y);
int main()
{
    int x,y,option;
    printf("Enter the two numbers");
    scanf("%d%d",&x,&y);
    printf("The options are:\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\nEnter your option");
    scanf("%d",&option);
    if(option==1)
    {
        printf("The added value is %d",additionf(x,y));
    }
    else if(option==2)
    {
        printf("The subtracted value is %d",subtractionf(x,y));
    }
    else if(option==3)
    {
        printf("the product is %d",multiplyf(x,y));
    }
    else if(option==4)
    {
        printf("the divided value is %f",dividef(x,y));
    }
    else
    {
        printf("Enter valid option");
    }
}

int additionf(int x,int y)
{
    return x+y;
}

int subtractionf(int x,int y)
{
    return x-y;
}

int multiplyf(int x,int y)
{
    return x*y;
}

float dividef(int x,int y)
{
    return x/(y*1.0);
}