#include "lr.c"
#include <stdio.h>

int lr1()
 // ���������� ������ ����������
{
float v1; // �������� ������
float v2; // �������� ������������
float t; // ����� �� �������
float L1; // ���������� ������� �������� ������
float L2; // ���������� ������� ������� ��������
float s; // ������� ����������

// ���� �������� ������
// ����� �� ����� ���������: v1 =
printf("v1 = ");

// ���� � ���������� �������� ���������� v1
scanf("%f", &v1);
// ����� �� ����� ���������: v2 =
printf("v2 = ");

// ���� � ���������� �������� ���������� v2
scanf("%f", &v2);
// ����� �� ����� ���������: t =
printf("t = ");

// ���� � ���������� �������� ���������� t
scanf("%f", &t);
// ������� ������
L1 = t * v1;// ���������� ���������� ������� �������� ������
L2 = t * v2;// ���������� ���������� ������� ������� ��������
s = L1 + L2; // ���������� �������� ����������
// ����� �����������
// ����� �� ����� �������� ���������� s
printf("distance = %f\n", s);
// ��������� ������������ ������� �����������
// ����������
int v;
printf("Do you want a continue?(if yes enter 1)\n");
scanf("%d", &v);
if(v==1)
    return main();
else
    return 0;
} // ����� ���� ���������

float f()
 // ������ �� ������������ �������,
 // ���������� ������ ����������
{ // ������ ���� ���������
// �������� ����������
float v1; // �������� ������
float v2; // �������� ������������
float t; // ����� �� �������
float L1; // ���������� ������� �������� ������
float L2; // ���������� ������� ������� ��������
float s; // ������� ����������

// ���� �������� ������
// ����� �� ����� ���������: v1 =
printf("v1 = ");

// ���� � ���������� �������� ���������� v1
scanf("%f", &v1);
// ����� �� ����� ���������: v2 =
printf("v2 = ");

// ���� � ���������� �������� ���������� v2
scanf("%f", &v2);
// ����� �� ����� ���������: t =
printf("t = ");

// ���� � ���������� �������� ���������� t
scanf("%f", &t);
// ������� ������
L1 = t * v1;// ���������� ���������� ������� �������� ������
L2 = t * v2;// ���������� ���������� ������� ������� ��������
s = L1 + L2; // ���������� �������� ����������
}
int lrd1()
{

// ����� �����������
// ����� �� ����� �������� ���������� s
printf("distance = %f\n", f());
// ��������� ������������ ������� �����������
// ����������
int v;
printf("Do you want a continue?(if yes enter 1)\n");
scanf("%d", &v);
if(v==1)
    return main();
else
    return 0;
} // ����� ���� ���������

int lr2()
{
float s; // ����� ����
float a; // ��������� ������� ����
float c; // ��������� ���������� �������� ����
float b; // ����������� ���������� �������� ����
int N; // ����� ��������� ����
int i; // ����� ���������� �������� ����
int sign; // ���� ���������� �������� ����
// ���� ���������� ����
printf("N=");
scanf("%d", &N);
// ��������� ������������ ����������
s = 0;
sign = 1;
i = 0;
c = 1;
b = 1;
// ����
while( i < N )
{
 a = c / b;
 s = s + a*sign;
 sign = -sign;
 c = c + 1;
 b = b * 2;
 i = i + 1;
 }
// ����� ����������
printf("s = %f\n", s);
int v;
printf("Do you want a continue?(if yes enter 1)\n");
scanf("%d", &v);
if(v==1)
    return main();
else
    return 0;
}

int lrd2()
{
float s, a, c, b;
int N, i, sign, w;
printf("N=");
scanf("%d", &N);
// ��������� ������������ ����������
s = 0;
sign = 1;
i = 0;
c = 1;
b = 1;
w = 0;
// ����
while( i < N )
{
 a = c / b;
 s = s + a*sign;
 sign = -sign;
 c = c + 1;
 b = b * 2;
 i = i + 1;
 w++;
 printf("S%d", w);
 printf(")= %f\n", s);
 }
// ����� ����������
printf("Sall) = %f\n", s);
int v;
printf("Do you want a continue?(if yes enter 1)\n");
scanf("%d", &v);
if(v==1)
    return main();
else
    return 0;
}

int lr3()
{
int c; // ������� ������ �� ������
int prev_c; // ���������� ������
int cnt; // �������
int a;
 // ���������
// ��������� ������������ (�������������)
printf("Enter a words: ");
cnt = 0;
prev_c = ' ';
a=0;
// ���� ������ �������� �� ������, ���������� �
// �����������
while( (c = getchar()) != EOF )
 {
 if( c == ' ' || c == '.' || c == '\n' ||
 c == ',' )
 {
 a = 0;
 }
 else
 {
a++;
 }
 if(a == 2)
 {
  if(prev_c == c)
  {
      cnt++;
  }
 }
 prev_c = c;
 }
printf("number of words = %d\n", cnt );
int v;
printf("Do you want a continue?(if yes enter 1)\n");
scanf("%d", &v);
if(v==1)
    return main();
else
    return 0;
}

int lrd3()
{
int c, a=0; // ������� ������ �� ������
int prev_c, prev_cc, prev_ccc; // ���������� ������
int cnt; // �������
 // ���������
// ��������� ������������ (�������������)
printf("Enter a words: ");
cnt = 0;
prev_ccc= ' \0\0';
prev_cc= ' \0';
prev_c = ' ';

// ���� ������ �������� �� ������, ���������� �
// �����������
while( (c = getchar()) != EOF )
 {
 if(c == ' ' || c == '.' || c == '\n' || c == ',')
 {
     a=0;
 }
 else
 {
     a++;
 }
 if(a>0)
 {

     if(prev_ccc==prev_cc)
     {
         if(prev_cc==prev_c)
         {
             cnt++;
         }
     }
 }
 else
 {
     cnt=cnt;
 }
prev_ccc= prev_cc;
prev_cc = prev_c;
 prev_c = c;
 }
printf("number of words = %d\n", cnt );
 int v;
printf("Do you want a continue?(if yes enter 1)\n");
scanf("%d", &v);
if(v==1)
    return main();
else
    return 0;
}

int lr4()
{
    int c, a, pc, d, i=-1, flag;
    char p[1000];
    a=0;
    pc=' ';
    printf("Enter a words\n");
    while( (c = getchar()) != EOF )
    {
        i++;
        if(c == ' ' || c == '.' || c == ',' || c=='\n')
        {
            a=0;
        }
        else
        {
            a++;
        }
        if(a==1)
        {
            if(c=='e' || c=='y' || c=='u' || c=='i' || c=='a' || c=='o' || c=='E' || c=='Y' || c=='U' || c=='I' || c=='O' || c=='A')
            {
                flag=1;
            }
            else
            {
                flag=0;
            }
        }
      if(flag==0)
       {
           p[i]=c;
       }
       else
       {
           i--;
       }
        pc=c;
    }
    printf("%s", p);
int v;
printf("Do you want a continue?(if yes enter 1)\n");
scanf("%d", &v);
if(v==1)
    return main();
else
    return 0;
}

int lrd4()
{
    int a, c, i, pc, u, flag=0;
    char b[1000], p[1000];
    i=0;
    a=0;
    while((c=getchar())!=EOF)
    {
        b[i]=c;
        i++;
    }
    int e, y, found=0, sc, k=0, cnt=0;
    e=i+1;
    pc=b[0];
    for(int u=0; u<e; u++)
    {
        k=0;
        if(b[u]==' ')
        {
            y=a;
            a=0;
        }
        else
        {
            a++;
        }
        if(a==1)
            pc=b[u];
        if(pc=='e' ||pc=='y' ||pc=='u' ||pc=='i' ||pc=='o' ||pc=='a')
        {
            flag=1;
        }
        else
        {
            flag=0;
        }
        if(flag==1)
        {
        if(a==0)
        {
            sc=b[u-1];
        if(sc=='q'||sc=='w'||sc=='r'||sc=='t'||sc=='p'||sc=='s'||sc=='d'||sc=='f'||sc=='g'||sc=='h'||sc=='j'||sc=='k'||sc=='l'||sc=='z'||sc=='x'||sc=='c'||sc=='v'||sc=='b'||sc=='n'||sc=='m')
        {
          for(int v=0; v<=y; v++)
          {
              b[cnt-y+v]=' ';
          }
        }
        else
        {
            for(int v=0; v<=y; v++)
          {
              b[cnt-y+v]=b[cnt-y+v];
          }
        }
        }
        }
        cnt++;
        sc=' ';
    }
    int j=0;
    for (i = 0; i<=cnt ; i++) {
        if (b[i] == ' ')
        {
          if (j==0) continue;
          if (b[i+1] == ' ') continue;
        }
        p[j] = b[i];
        j++;
    }
    printf("%s", p);
    int v;
printf("Do you want a continue?(if yes enter 1)\n");
scanf("%d", &v);
if(v==1)
    return main();
else
    return 0;
}

#define N 10
int lr5()
{
int x[N]; // ������ �� N ���������
int i;
// ���� �������
for( i = 0; i < N; i++ )
 scanf("%d", &x[i]);
// ���������� ����������� � ����������� �������� � �������
int max, min;
max=x[0];
for(i = 0; i < N; i++ )
{
if(x[i]>max)
{
    max=x[i];
}
else
{
    if(x[i]<min)
    {
        min=x[i];
    }
}
}
// ������ ���������
for( i = 0; i < N; i++ )
 {
 if( x[i] == max )
 {
 x[i] = min;
 }
 else
 {
     if(x[i]==min)
     {
         x[i]=max;
     }
 }
 }
// ����� �������
for( i = 0; i < N; i++ )
 printf("%d ", x[i]);
printf("\n");
int v;
printf("Do you want a continue?(if yes enter 1)\n");
scanf("%d", &v);
if(v==1)
    return main();
else
    return 0;
}

int lrd5()
{
    int x[N]; // ������ �� N ���������
int i;
// ���� �������
for( i = 0; i < N; i++ )
 scanf("%d", &x[i]);
// ���������� ����������� � ����������� �������� � �������
int max, min;
max=x[0];
for(i = 0; i < N; i++ )
{
if(x[i]>max)
{
    max=x[i];
}
else
{
    if(x[i]<min)
    {
        min=x[i];
    }
}
}
// ������ ���������
if((min+max)%2==0)
{
for( i = 0; i < N; i++ )
 {
 if( x[i] == max )
 {
 x[i] = min;
 }
 else
 {
     if(x[i]==min)
     {
         x[i]=max;
     }
 }
 }
}
// ����� �������
for( i = 0; i < N; i++ )
 printf("%d ", x[i]);
printf("\n");
int v;
printf("Do you want a continue?(if yes enter 1)\n");
scanf("%d", &v);
if(v==1)
    return main();
else
    return 0;
}

int lr55()
{
int x[N], y[N]; // ������ �� N ���������
int i, j=0;
// ���� �������
for( i = 0; i < N; i++ )
 scanf("%d", &x[i]);
// ���������� ����������� � ����������� �������� � �������
for(int f=0; f<N; f++)
{
int min;
min=x[0];
for(i = 0; i < N; i++ )
{
if(x[i]<min)
{
    min=x[i];
}
}
if(min != 999)
    printf("%d ", min);
else
    printf(" ");
// ������ ���������
for( i = 0; i<N ; i++ )
 {
 if( x[i] == min )
 {
    y[j]=min;
    x[i]=999;
 }
 }
}
printf("\n");
int v;
printf("Do you want a continue?(if yes enter 1)\n");
scanf("%d", &v);
if(v==1)
    return main();
else
    return 0;
}

#define K 3
#define N 4
int lr6()
{
int x[K][N]; // ������ �� K �� N ���������
int i, j;
// ���� �������
for( i = 0; i < K; i++ )
 for( j = 0; j < N; j++ )
 scanf("%d", &x[i][j]);

int min;
for( i = 0; i < K; i++ )
{
 for( j = 0; j < N; j++ )
 {
    if( x[i][j] < min )
    {
        min = x[i][j];
    }
 }
}
// ���������� ��������� ���������
for( i = 0; i < K; i++ )
{
 for( j = 0; j < N; j++ )
 {
 if( x[i-1][j] == min )
 {
     int p=0;
     while(p<4)
     {
         if(i<2)
         {
             x[i][0+p]=0;
            x[i+1][0+p]=0;
         p++;
         }
         else
         {
         x[i][0+p]=0;
         p++;
         }
     }
 }
 }
 }
// ����� �������
for( i = 0; i < K; i++ )
 {
 for( j = 0; j < N; j++ )
 printf("%4d ", x[i][j]);
 printf("\n");
 }
int v;
printf("Do you want a continue?(if yes enter 1)\n");
scanf("%d", &v);
if(v==1)
    return main();
else
    return 0;
}

struct tipes
{
    char first;
    int second;
    float third;
    double fourth;
};
lrd6()
{
  int x[K][N]; // ������ �� K �� N ���������
int i, j;
struct tipes C;
// ���� �������
for( i = 0; i < K; i++ )
 for( j = 0; j < N; j++ )
 scanf("%d", &x[i][j]);

int min;
for( i = 0; i < K; i++ )
{
 for( j = 0; j < N; j++ )
 {
    if( x[i][j] < min )
    {
        min = x[i][j];
    }
 }
}
int flag=0, r=0;
// ���������� ��������� ���������
for( i = 0; i < K; i++ )
{
 for( j = 0; j < N; j++ )
 {
 if( x[i][j] == min )
    r=i;
 }
 }
     if(r==1)
     {
        C.first=x[r+1][0];
        C.second=x[r+1][1];
        C.third=x[r+1][2];
        C.fourth=x[r+1][3];
     }
for( i = 0; i <= r ; i++ )
 {
 for( j = 0; j < N; j++ )
 printf("%4d ", x[i][j]);
 printf("\n");
 }
 if(r==1)
{
     printf("%   d   %d   %f   %f\n", C.first, C.second, C.third, C.fourth);
}

int v;
printf("Do you want a continue?(if yes enter 1)\n");
scanf("%d", &v);
if(v==1)
    return main();
else
    return 0;
}

int lr7()
{
    int R, f, t, S=0, s=0, l, b[100], e[100], u;
    printf("Enter your number:\n");
    scanf("%d", &R);
    for(int i=0; R!=1/2; i++)
    {
        if(R%2==0)
            b[i]=0;
        else
            b[i]=1;
        R=R/2;
        f=i;
    }
    t=f;
    for(int j=0; j<=t; j++)
    {
        e[j]=b[f];
        f--;
    }
    printf("ishod: ");
     for(int j=0; j<=t; j++)
    {
    printf("%d", e[j]);
    }
    printf("\n");
    for(int m=0; m<=t; m=m+2)
    {
        l=e[m];
        e[m]=e[m+1];
        e[m+1]=l;
    }
    printf("zamen: ");
        for(int j=0; j<=t; j++)
    {
    printf("%d", e[j]);
    }
    printf("\n");
    for(int j=0; j<=t; j++)
    {
        u=j;
        while(t-u!=0)
        {
            e[j]=e[j]*2;
            s=e[j];
            u++;
        }
        S=S+s;
        s=0;
    }
    printf("%d\n", S);
    int v;
printf("Do you want a continue?(if yes enter 1)\n");
scanf("%d", &v);
if(v==1)
    return main();
else
    return 0;
}

