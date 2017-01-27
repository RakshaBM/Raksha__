#include<stdio.h>
#define N 30
int tile[N];
void snake()
{
int i,min,cc,move,f;
cc=0;
min=99;
 for(i=1;i<N;i++)
	{    cc=0;
		if(tile[i]<i)
		{
			cc=mindist(1,i);
			cc=cc+mindist(tile[i],N);

		}
		if(cc<min && cc!=0)min=cc;
	}
printf("\n The minimum throw with a snake bite=%d\n",min);
}
int mindist(int i,int n)
{
int move,j,k,min,c;
min=999;	c=0;
for(j=1;j<=n;j++)
{move=0; c=0;
	while(i<=n)
	{
		if(tile[i]>(i+1) && tile[i]<n)
		{
		   move=tile[i];
		   i=move;
		   c++;
			if(i==n){
				if(c<min)
				min=c;
				break;
			}
		}
		else
		{
			k=n-move;
			if(k<=12){
				if(k<=6){
				c++;goto s;}
			c=c+2;
			s: if(c<min)
			min=c;						
			}
		i++;
	}
	if(i==(i+6))c++;
}if(c<min && i==n)min=c;

return min;
}}	
void dist()
{
        int l,j,i,c,move,min=99;
        move=i=1;
        c=0;
        for(l=1;l<=6;l++)
        {move=i=l;c=0;
                while(i<=N)
                {
                if((tile[i]>(i+1)))
                {
                        move=tile[i];
                        i=move;
                        c++;
                        if(i==N){
                        min=c;break;}
                }
                else
                {       j=(N-move);
                        if(j<=12)
                        {
                                if(j<=6){
                                c=c+1;goto t1;}
                                c=c+2;
                               t1:
                                if(c<min)
                                min=c;
                                break;
                        }
                }if(i%6==0)c++;
                        i++;
        }
}
if(c<min)min=c;
printf("\n minimum throw=%d\n",min);
}

void numbsl()
{
int s=0,l=0,i;

for(i=1;i<N;i++)
if(tile[i]>(i+1))
l++;
else if(tile[i]<i)
s++;
printf("\n snakes=%d \n ladders=%d\n",s,l);
}

int main()
{
int i,m;
for(i=1;i<N;i++)
tile[i]=(i+1);
tile[N]=N;
tile[3]=22;
tile[5]=8;
tile[11]=26;
tile[17]=4;
//tile[19]=7;
tile[20]=29;
tile[21]=9;
//tile[27]=1;

numbsl();
dist();
snake();
return 0;
}

