#include <stdio.h>

#include <stdlib.h>

int main()

{

int j, res;

int primo = 100;

int k = 1;

while (k <= 10)

{

int cont = 0;

j = primo;

while(j > 0)

{

res = primo%j;

if(res == 0) cont = cont + 1;

j = j - 1;

}

if (cont == 2){

printf("%d - numero primo\n", primo);

k = k + 1;

}

primo = primo + 1;

}

system("pause");

return 0;
