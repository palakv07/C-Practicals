//1.Check if a Number is Even or Odd (Using Modulus Operator 
/*#include <stdio.h>
int main(){
    int n;
    char cc;
    do
    {
        printf("enter a number");
        scanf("%d", &n);
        printf("%d", n*n*n*n);
        printf("y/n");
        fflush(stdin);
        scanf("%c", &cc);
    }
    while(cc == 'y');
    return 0;
}*/

//2 Find the Largest of Two Numbers (Using Relational and Conditional Operators) 
/*#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b;
    printf("numbers");
    scanf("%d%d", &a,&b);
    if(a > b){
        goto sos;
    }
    else{
        printf("largest no %d", b);
        exit(1);
    }
    sos:
       printf("largest no %d", a);
       return 0;
}*/

//3. Swap Two Numbers Without a Third Variable (Using Arithmetic Operators) 
/*#include <stdio.h>
int main(){
    int a,b;
    printf("numbers");
    scanf("%d%d", &a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a = %d\n", a);
    printf("b = %d\n",b);
    return 0;
}

//4.Check if a Number is Positive, Negative, or Zero (Using Relational and Logical Operators)
#include <stdio.h>
int main(){
    int n;
    printf("numbers");
    scanf("%d", &n);
    if(n>0){
        printf("Positive number");
    }
    else if(n<0){
        printf("negative number");
    }
    else{
        printf("zero");
    }
    return 0;
}

//5.Perform Bitwise AND, OR, and XOR Operations ON TWO INTEGERS.
#include <stdio.h>
int main(){
    int a,b;
    printf("numbers");
    scanf("%d%d", &a,&b);
    printf("AND operator %d\n", a & b);
    printf("OR operator %d\n", a | b);
    return 0;
}

//6.Check if a Year is a Leap Year (Using Logical and Relational Operators)
#include <stdio.h>
int main(){
    int n;
    printf("leap year");
    scanf("%d", &n);
    if(n%4 == 0 || n % 400 == 0){
        printf("leap year %d", n);
    }
    else{
        printf("not leap year %d", n);
    }
    return 0;
}*/

//7.Calculate Simple Interest (Using Arithmetic Operators) 
/*#include <stdio.h>
int main(){
    int si,p,n,r;
    printf("enter principal, time, rate");
    scanf("%d%d%d", &p,&n,&r);
    si = (p*n*r)/100;
    printf("simple interest %d", si);
    return 0;
}

//8.Toggle a Bit of a Number (Using Bitwise XOR Operator) 
#include <stdio.h>
int main(){
    int a,b;
    printf("numbers");
    scanf("%d%d", &a,&b);
    printf("Toggle bit number %d", a^b);
    return 0;
}

//9.Calculate the Power of a Number (Using Multiplication in a Loop) 
#include <stdio.h>
int main(){
    int n,i,x;
    printf("enter number and power");
    scanf("%d%d", &n,&x);
    int pow = 1;
    for(i = 1; i<=x; i++){
        pow *= n;
    }
    printf("power %d", pow);
    return 0;
}

//10.Check if a Character is a Vowel or Consonant (Using Logical Operators)
#include <stdio.h>
int main(){
    char c;
    printf("enter a char");
    scanf("%c", &c);
    if(c == 'i' || c == 'o' || c == 'e' || c == 'u' || c =='a'){
        printf("VOWEL");
    }
    else{
        printf("CONSONANT");
    }
    return 0;
}*/

//1. Calculate area of triangle.
/*#include <stdio.h>
int main(){
    int l,b;
    printf("enter length and breadth");
    scanf("%d%d", &l,&b);
    int area = (l*b)/2;
    printf("Area of triangle %d",area);
    return 0;
}

//2. Write a program to reverse a 5 digit no.
#include <stdio.h>
int main(){
    int n;
    printf("numbers");
    scanf("%d", &n);
    int rev = 0;
    while(n>0){
        int d = n%10;
        rev = rev*10 + d;
        n = n/10;
    }
    printf("reverse number %d",rev);
    return 0;
}*/

//3. Write a menu driven program using switch to find
/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, ch, i, fact;

    while (1)
    {
        printf("\n--- MENU ---\n");
        printf("Factorial      : 1\n");
        printf("Prime          : 2\n");
        printf("Even or Odd    : 3\n");
        printf("Exit           : 4\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        if (ch == 4)
            exit(0);

        printf("Enter number: ");
        scanf("%d", &n);

        switch (ch)
        {
            case 1:
                fact = 1;
                for (i = 1; i <= n; i++)
                    fact *= i;
                printf("Factorial = %d\n", fact);
                break;

            case 2: {
                int isPrime = 1;

                if (n <= 1)
                    isPrime = 0;

                for (i = 2; i <= n / 2; i++)
                {
                    if (n % i == 0)
                    {
                        isPrime = 0;
                        break;
                    }
                }

                if (isPrime)
                    printf("Prime number\n");
                else
                    printf("Not a prime number\n");
                break;
            }

            case 3:
                if (n % 2 == 0)
                    printf("%d is even\n", n);
                else
                    printf("%d is odd\n", n);
                break;

            default:
                printf("Wrong choice\n");
        }
    }

    return 0;
}*/

//4. Consider a currency system in which there are notes of 6 denominations Rs1,2,5,10,50,100. If a sum of Rs N is enter through keyboard. WAP to compute smallest no. of notes that will combine to give Rs N.


//5. While purchasing certain items, a discount of 10% was offered, If quantity is more then 1000.If Quantity and price are offered through keyboard, wap to calculate expense.
/*#include <stdio.h>
int main(){
    int q,p;
    float amt;
    printf("enter quantity and price");
    scanf("%d%d", &q, &p);
    amt = q*p;
    if(q > 1000){
        amt = amt*0.9;
    }
    printf("Total Amount %.2f", amt);
    return 0;
}

//6. In a company employee is paid HRA and DA, if his basic salary (BS) is less then Rs1500 then HRA = 10 % of BS and DA = 90% of BS. If employee salary is input through keyboard, wap to find grass salary.
#include <stdio.h>
int main(){
    int s;
    float gross, HRA, DA;
    printf("enter salary");
    scanf("%d", &s);
    if(s<1500){
        HRA = s*0.1;
        DA = s*0.1;
    }
    else{
        HRA = 0;
        DA = 0;
    }
    gross = HRA + DA + s;
    printf("gross salary %f", gross);
    return 0;
}*/

/*7. Find the division obtained by student using logical operator and if ese ladder.Get marks of 5 students through keyboard.
% >=60 FiRST division
%= 50 & 59 2nd division
% =40 &49 3rd division
%less then or equal to 40 fail*/
/*#include <stdio.h>
int main(){
    int n,perct;
    int a,b,c,d,e;
    printf("Enter marks: ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    perct = (a+b+c+d+e)/5;
    if(perct>= 60){
        printf("FiRST division");
    }
    else if(perct >= 50 && perct < 59){
        printf("2nd division");
    }
    else if(perct >= 40 && perct < 49){
        printf("3rd division");
    }
    else{
        printf("fail");
    }
    return 0;
}*/

/*#include <stdio.h>
int main(){
    int i = 1,j = 1;
    while(i++ <= 100)
    {
        while(j++ <= 200){
            if(j == 200){
                break;
            }
            else{
                printf("%d  %d\n", i,j);
            }
        }
    }
    return 0;
}*/

/*#include <stdlib.h>
int main(){
    int a = 1;
    printf("%d %d %d\n", a,++a,a++);
    return 0;
}*/

//convert number to roman number
#include <stdlib.h>
int rom(int, int, char);
int main()
{
    int n;
    printf("enter number");
    scanf("%d" ,&n);
    n = rom(n, 1000 ,'m');
    n = rom(n, 500 ,'d');
    n = rom(n, 100 ,'c');
    n = rom(n, 50 ,'l');
    n = rom(n, 10 ,'x');
    n = rom(n, 5 ,'v');
    rom(n, 1 ,'i');
    return 0;
}
int rom(int y, int k, char c)
{
    int i,j;
    j = y/k;
    for(i = 1; i<= j; i++){
        printf("%c", c);
    }
    return(y%k);
}  
