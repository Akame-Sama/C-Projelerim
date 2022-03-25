#include <stdio.h>
#include <math.h>
int main(void){
int sayı1;
int sonuç;
int işlem;
int sayı2;
printf("Lütfen İşlem İçin Bir Sayı Gir :");
scanf("%d",&sayı1);
printf("Lütfen İşlem İçin Bir Sayı Gir :");
scanf("%d",&sayı2);
printf("Toplama İşlemi İçin : 1 ||| Çıkarma İşlemi İçin : 2 ||| Çarpma İşlemi İçin : 3 ||| Bölme İşlemi İçin : 4 :"); 

scanf("%d",&işlem);
if(işlem == 1){
sonuç = sayı1 + sayı2; 

printf("Sonucunuz %d",sonuç);
}
if(işlem == 2){
sonuç = sayı1 - sayı2; 

printf("Sonucunuz %d",sonuç);
    }
  if(işlem == 3){
sonuç = sayı1 * sayı2; 

printf("Sonucunuz %d",sonuç);
    }
if(işlem == 4){
sonuç = sayı1 / sayı2; 

printf("Sonucunuz %d",sonuç);
  }
return 0;
}
