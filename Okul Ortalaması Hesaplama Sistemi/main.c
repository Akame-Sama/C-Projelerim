#include <stdio.h>
#define Türkçe 5
int main(void) { 

  int türkçe;
  float ort;
  printf(" Türkçe Ortalamanızı Giriniz :");
  scanf("%d",&türkçe);
  if(türkçe < 50){
   printf("Türkçe 50'den Dusuk ");
    }else{} 

  int mat;
  printf(" Mat Ortalamanızı Giriniz :");
  scanf("%d",&mat); 

  int fen;
  printf(" Fen Ortalamanızı Giriniz :");
  scanf("%d",&fen); 

int sosyal;
  printf(" Sosyal Ortalamanızı Giriniz :");
  scanf("%d",&sosyal);
    
  int din;
  printf(" Din Ortalamanızı Giriniz :");
  scanf("%d",&din);
  
  int ing;
  printf(" İngilizce Ortalamanızı Giriniz :");
  scanf("%d",&ing);
  
int beden;
  printf(" Beden Ortalamanızı Giriniz :");
  scanf("%d",&beden); 

  int görsel;
  printf(" Görsel Ortalamanızı Giriniz :");
  scanf("%d",&görsel);
  
  int müzik;
  printf(" Müzik Ortalamanızı Giriniz :");
  scanf("%d",&müzik);
  
  int tasarım;
  printf(" Teknoloji Tasarım Ortalamanızı Giriniz :");
scanf("%d",&tasarım);
  
  int seçmat;
  printf(" Seçmeli Matematik Ortalamanızı Giriniz :");
  scanf("%d",&seçmat); 

  int seçfen;
  printf(" Seçmeli Fen Ortalamanızı Giriniz :");
  scanf("%d",&seçfen);
  
  int seçing;
  printf(" Seçmeli İngilizce Ortalamanizi Giriniz : ");
  scanf("%d",&seçing);
  ort = (türkçe + mat + fen + görsel + müzik + tasarım + beden + seçfen + seçmat + seçing + din + sosyal + ing)/13.0;
   printf("Ortalamanın : %f",ort);
 if(ort > 85){
printf("Ortalaman : %f oldugu için Takdir Aldın",ort);
 }else{
   printf("Ortalaman : %f oldugu için Teşekkür Aldın",ort);
 }if(ort < 60){
   printf("Ortalaman : %f oldugu için Siktirname Aldın",ort);
 }
    return 0;
  }
