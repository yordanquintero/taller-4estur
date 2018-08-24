#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
void vocales(char *);
void menu();
void primera();
void segunda();
int main(){

menu();
    return 0;
}
void vocales (char *s){
int conta=0,conte=0,conti=0,conto=0,contu=0;

while(*s){
    switch(*s){
    case 'a':conta++;
            break;
    case 'e':conte++;
            break;
    case 'i':conti++;
            break;
    case 'o':conto++;
            break;
    case 'u':contu++;
            break;
    }
    s++;
}
printf("A = %d\n",conta);
printf("E = %d\n",conte);
printf("I = %d\n",conti);
printf("O = %d\n",conto);
printf("U = %d\n",contu);
}
void menu(){
    int opcion;
do{
        system("cls");
printf("menu taller 4\n");
printf("1.\n");
printf("2.\n");
printf("3.\n");
printf("ingrese una opcion: ");
scanf("%d",&opcion);
switch(opcion){
    case 1:primera();
        break;
    case 2:segunda();
        break;
    default:printf("ingrese un valor valido");

}



}while(opcion!=0);



}
void primera(){
    system("cls");
char a, *p;
   p=&a;
   system("cls");
   printf("ingrese un valor para la variable: \n");
   scanf("%s",&a);
   while(a>=97&&a<=122){
     printf("error, el valor debe ser mayor a cero: \n");
    scanf("%s",&a);


    system("cls");
   printf("a=%d\n",a);
   printf("la direccion de a es %p\n",&a);
    printf("*p=%p\n",p);
   printf("a=%d\n",*p);
   printf("el tamaño de *p es %d\n",sizeof(p));



   delete[] p;
   printf("%d\n",p);
   p=NULL;
   printf("%d\n",p);





   getch();

}
system("pause");
}
void segunda(){
    system("cls");
    char nombre[20];
    printf("digite una palabra: ");
    fflush(stdin);
    gets(nombre);
    printf("el numero de vocales es:\n");
    vocales(nombre);
        system("pause");
}

