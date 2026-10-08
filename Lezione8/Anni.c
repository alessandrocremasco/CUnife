#include <stdio.h>

int main(){
  int anno;
  int mese;
  int giorni;

  printf("Inserire un anno:\n");
  scanf("%d", &anno);

  printf("Inserire un mese:\n");
  scanf("%d", &mese);

  if(mese == 2){

    if (anno % 4 == 0 && anno % 100 != 0 || anno % 400 == 0) //condizione anno bisestile
      giorni = 29;
    else
      giorni = 28;
  }

  else if (mese == 4 || mese == 6 || mese == 9 || mese == 11)
    giorni = 30;

  else
    giorni = 31;

  printf("Anno: %d, mese: %d, giorni: %d", anno, mese, giorni);
    
}