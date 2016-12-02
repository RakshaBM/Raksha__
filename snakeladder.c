#include<stdio.h>
#define N 30
int tile[N];
void snake()
{
        int l,j,i,f,c,move,min=99;
        move=i=1;
        c=0;
        for(l=1;l<=6;l++)
        {move=i=l;c=0;f=0;
                while(i<=N)
                { 
                while(i<=(i+6))
                {       if(tile[i]<i){printf("\nsnake snake snake i=%d",i);
				f=1;}                 
                        move=tile[i];
                        i=move;
                        c++;
                        if(i==N){
                       break;}
		if(f==1)break;
                }
                if(tile[i]>i+1)
		{printf("\n in if i=%d",i);
			move=tile[i];
                        i=move;
                        c++;
                        if(i==N){
                       break;}
}
                else {//printf("\n in else i=%d",i);
                         j=(N-move);
                        if(j<=12)
                        {
                                if(j<=6){
                                c=c+1;goto t1;}
                                c=c+2;
                             
                                //if(c<min)                                          //printf("\ni=%d",i);
                                t1:break;
                        }//printf("\n iiiiii=%d\n",i);
                }if(i%6==0)c++;
                        i++;
        }//printf("\nmin=%d\n",min);
}
if(c<min && f==1)min=c;
printf("\nthe minimum throw with snake bite is=%d\n",min);
}

void dist()
{
        int l,j,i,c,move,min=99;
        move=i=1;
        c=0;
        for(l=1;l<=6;l++)
	{move=i=l;c=0;
	//printf("enter for i=%d\n",i);
		while(i<=N)
        	{ //printf("\n in while i=%d\n",i);
                if((tile[i]>(i+1)))
                {//printf("\n while if i=%d",i);                        
			move=tile[i];
                        i=move;
			c++;
			if(i==N){
			min=c;break;}
                }
                else
                {//printf("\n while else min=%d i=%d",min,i);
                         j=(N-move);
                        if(j<=12)
                        {
                                if(j<=6){
                                c=c+1;goto t1;}
                                c=c+2;
                               t1:
                                if(c<min)
                                min=c;		//printf("\ni=%d",i);
                                break;
                        }//printf("\n iiiiii=%d\n",i);
                }if(i%6==0)c++;
			i++;
        }//printf("\nmin=%d\n",min);
}
if(c<min)min=c;
printf("\nthe minimum throw is=%d\n",min);
}
void numbsl()
{
int s=0,l=0,i,lop;
printf("\nEnter value for size of");
scanf("%d",&lop);
int a[lop];
printf("\n size of array=%d",sizeof(a));
for(i=1;i<N;i++)
if(tile[i]>(i+1))
l++;
else if(tile[i]<i)
s++;
printf("\n snakes=%d \n ladders=%d\n",s,l);
}

int main()
{
int i;
for(i=1;i<N;i++)
tile[i]=(i+1);

tile[3]=22;
tile[5]=8;
tile[11]=26;
tile[17]=4;
tile[19]=7;
tile[20]=29;
tile[21]=9;
tile[27]=1;
tile[9]=30;
//tile[6]=30;
//tile[4]=9;
//tile[10]=30;

numbsl();
dist();
snake();
return 0;
}
