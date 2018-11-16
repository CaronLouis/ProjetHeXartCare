#include "coeur.h"
#include "param.h"
int A;
int B;
void setup() {
  for(int i=0;i<10;i++)
  {
    pinMode(tableauLED[i],OUTPUT);
    digitalWrite(tableauLED[i],LOW);
  }

}

void loop() {

allumage();
delay(300);
}


void allumage() {
  for(int p=DEBUT_TAB;p<FIN_TAB;p++)
  {
    for(int i=0;i<10;i++)
    {
      boolean etat=ledAllumees[p][i];
      digitalWrite(tableauLED[i],etat);
    }
   delay(DELAI);
  }
}
