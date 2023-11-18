#include <stdio.h>
#include <stdlib.h>

int main()
 {
    int pas, pad;

    printf("Pressao arterial diastOlica: ");
     scanf("%d", &pad);

    printf("Pressao arterial sistOlica: ");
     scanf("%d", &pas);

    if ((pad <85) && (pas <130)){
      printf("Normal");
    }
    if ((pad >86) && (pad <90) && (pas >130) && (pas <140)){
      printf("Normal limítrofe");
    }
    if ((pad >=91) && (pad <=100) && (pas >=141) && (pas <=60)){
      printf("Hipertensao leve (estagio 1)");
    }
    if ((pad >=101) && (pad <=110) && (pas >=161) && (pas <=180)){
      printf("Hipertensao moderada (estagio 2)");
    }
    if ((pad >=111) && (pas >=180)){
      printf("Hipertensao grave (estagio 3)");
    }
    if ((pad <=90) && (pas >=140)){
      printf("Hipertensao sistólica isolada");
    }
    elif{
        printf("Numero invalido");
    }
  }

