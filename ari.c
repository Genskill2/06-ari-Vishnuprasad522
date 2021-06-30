#include <stdio.h>
#include <ctype.h>
#include <string.h>


string ari(string s) {
  
  string grade;
  float chara = 0, word = 0, sentence = 0;
  for(int i = 0; i<strlen(s); i++) {
    if(isalnum(s[i])) {
      chara = chara + 1;
    } 
    if(s[i]==' ') {
      word = word +1; 
    }
    if(s[i]=='.' || s[i]=='?' || s[i]=='!') {
      sentence = sentence + 1;
    }
  }
  float num1 = 4.71 * (chara/word);
  float num2 = 0.5 * (word/sentence);
  float num = num1 + num2 - 21.43;
   // printf("%f\n", num);//
  int b = 0;
  
  if(num==(int)num) {
     b = (int)num;
  }
  else if(num>(int)num) {
     b = (int)num + 1;
  }

  //printf("%d\n", b);//

  if(b==1) {
    grade = "Kindergarten";
  }
  if(b==2) {
    grade="First/Second Grade";
  }
  if(b==3) {
    grade="Third Grade";
  }
  if(b==4) {
    grade="Fourth Grade";
  }
  if(b==5) {
    grade="Fifth Grade";
  }
  if(b==6) {
    grade="Sixth Grade";
  }
  if(b==7) {
    grade="Seventh Grade";
  }
  if(b==8) {
    grade="Eighth Grade";
  }
  if(b==9) {
    grade="Ninth Grade";
  }
  if(b==10) {
    grade="Tenth Grade";
  }
  if(b==11) {
    grade="Eleventh Grade";
  }
  if(b==12) {
    grade="Twelfth Grade";
  }
  if(b==13) {
    grade="College Student";
  }
  if(b==14) {
    grade="Professor";
  }
  //printf("%s\n", grade);//
  return grade;
}
