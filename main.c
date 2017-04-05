#include <stdio.h>
#include <stdlib.h>

void ptrtest(char a, char b, char* c);
void cenzura(char* tomb, int hossz, int tol);
void szamol(int* tomb);

int main()
{
    printf("*** 1. feladat ***");
    /**1. feladat*/
    char var=12;
    char* ptr;
    ptr=&var;
    printf("\nVar cime:%d", &var);
    printf("\nVar erteke:%d", var);
    printf("\nPtr erteke:%d", ptr);
    printf("\nPtrben tartol cimen levo valtozo erteke:%d", *ptr);
    *ptr=24;
    printf("\nVar erteke:%d", var);


    printf("\n\n*** 2. feladat ***");
    /**2. feladat*/
    int sum=0;
    printf("\nsum erteke:%d", sum);
    ptrtest(12,32,&sum);
    printf("\nsum erteke ptrtest utan:%d", sum);


    printf("\n\n*** 3. feladat ***");
    /**3. feladat*/
    char array[20]="Nagy Zsolt";
    printf("\n%s", array);
    cenzura(array, sizeof(array), 7); //azonos kifejezés: cenzura(&array[0], sizeof(array), 7);
    printf("\n%s", array);


    printf("\n\n*** 4. feladat ***\n");
    /**4. feladat*/
    int tomb[100]= {0};
    szamol(&tomb[0]);
    int i;
    for(i=0;i<100;i++){
        printf("%d ", tomb[i]);
    }
    printf("\n\n");
    return 0;
}

void szamol(int* tomb)
{
    int i=0, szam;
    for(szam=1000; szam<10000; szam++)
    {
        if(szam%7 == 0){
            if(szam%3 != 0){
                if((szam&0b101) == 0b100){
                    if(i<100)tomb[i++]=szam;
                }
            }
        }
    }
}

void cenzura(char* tomb, int hossz, int tol)
{
    int i;
    tomb[tol]='.';
    for(i=tol+1; i<hossz; i++)
    {
        tomb[i]=0;
    }
}

void ptrtest(char a, char b, char* c)
{
    *c=a+b;
}
