#include<stdio.h>
int queue[100],x,i,n,rear,front,choice;
void enqueue();
void dequeue();
void display();
int main()
{
    rear=-1;
    front=-1;
    printf("Enter value of n :");
    scanf("%d",&n);
    printf("list \n");
    printf("1-enqueue\n2-dequeue\n3-display\n4-exit\n");
    do{
        printf("Enter choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                enqueue();
            break;
            }
            
            case 2:{
                dequeue();
            break;

            }
            
            case 3:
            {
                display();
            break;
            }
            
            case 4:
            {
                printf("Exit");
            }
            
        }
    }while(choice !=4);
    return 0;
}
void enqueue()
{
    if(front==-1)
    {
        front++;
    }
    if(rear>=n)
    {
        printf("Queue overflow\n");
    }
    else{
        printf("Enter value :");
        scanf("%d",&x);
        rear++;
        queue[rear]=x;
    }
}
void dequeue()
{
    if(front==-1 &&rear ==-1 || front>rear)
    {
        printf("Queue underflow");
    }
    else{
        printf("\n%d value dequeued",queue[front]);
        front++;
    }
}
void display()
{
    for(i=front;i<=rear;i++)
    {
        printf("queue\n%d\n",queue[i]);
    }
}