#include<stdio.h>

int Intercambiar(int *pun1, int *pun2) {
    int t=*pun1;
    *pun1=*pun2;
    *pun2=t;
}

int DuplicarYSumar (int *p, int *resultado) {

    *resultado=0;
    printf("\nValor de p (p) = %d", *p);
    for (int i=0; i<3; i++) {
        printf("\nValor de p (p) = %d", *(p+i));
        *(p+i)=(*(p+i))*2;
        printf("\nValor de p (p) = %d", *(p+i));
        *resultado+=*(p+i);
    }
}

  int main() {
    //Datos para funcion intercambiar
    int a=10;
    int b=20;
    int *pun1=&a;
    int *pun2=&b;

    //Datos para funcion DuplicarYSumar
    int suma;
    int arre[]={3,2,1};
    int *p=arre;

    printf("\nDireccion de a (&a) = %p", (void*)&a);
    printf("\nValor de a (a) = %d", a);
    printf("\nDireccion de a (&pun1) = %p", (void*)&pun1);
    printf("\nValor de pun1 (pun1) = %p", (void*)pun1);
Intercambiar(pun1, pun2);
printf ("\n %d es a y %d es b", *pun1, *pun2) ;
    printf ("\n %d es a y %d es b", a, b) ;

int test =1;

DuplicarYSumar (arre, &suma) ;
    printf("\n");
    printf( "Resultado es %d " , suma);

}