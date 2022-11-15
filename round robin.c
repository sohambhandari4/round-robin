#include <stdio.h>
#include <conio.h>
struct process{int pid,wt,tot,bt,qt
}
p[10];
void main()
{
    int n,i,qt,count=0,temp,sq=0;
    int bt[10], wt[10],tot[10],rem_bt[10;
    float awt=0, atot=0;
    clrscr();
    printf("enter the number of process: ");
    scanf("%d",&n);
    printf("enter the burst time: ");
    for(i=0;i<n;i++)
{
scanf("%d",&bt[i]);
rem_bt [i]=bt[i];
}
printf("enter the quantum time: ");
scanf("%d",&qt);
while(1)
{
    for(i=o;count=0;i<n;i++)
    {
        temp=qt;
        if(rem_bt[i]==0)
        {
            count ++;
            continue;
        }
        if(rem_bt[i]>qt)
        rem_bt[i]=rem_bt[i]=qt;
        else
        if(rem_bt[i]>=0)
    }
    sq=sq+temp;
    tot[i]=sq;
}
if (n==count)
break;
}
printf("\n process id \t\t burst time \turnaround ti e\t
waiting time \n ");
for(i=0;i<n;i++)
{
    wt[i]=tot [i]-bt[i];
    awt = awt + wt[i];
    atot = atot + tot [i];
    printf("\n \t %d \t %d\t %d\t %d",i+1,
    bt[i],tot[i],wt[i]);
}
awt = awt /n;
atot = atot /n;
printf("avrage waiting time = %.2f \n",awt);
printf("avrage turnaround time = %.2f\n",atot);
getch();


        



