#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int miasstrlen(char *s);
char * miasstrcpy(char *dest, char *source);
char * miasstrncat(char *dest, char *source, int n);
int miasstrcmp(char *s1, char *s2);
char * miasstrchr(char *s, char c);
  
void main(){
  char word[100]="Tiger ";
  char word2[100]="Lion ";
  char word3[100]="In the Jungle, the mighty Jungle, the Lion sleeps tonight. ";
  char word4[100];
  char word5[100];
  char word6[100];
  printf("MY FUNCTIONS: \n ----------------------------------------- \n");
  printf("length of %s = %d \n", word, miasstrlen(word));
  printf("copy of %s --> %s \n", word2, miasstrcpy(word4,word2));
  miasstrcpy(word5, word);
  //printf("%s %s \n", word, word5);
  printf("concatenate 3 chars of %sto %s --> %s \n", word2, word, miasstrncat(word5, word2, 3));
  printf("%s > %s? %d \n", word2, word, miasstrcmp(word2,word));
  printf("search for 'o' in %s --> %s \n\n\n", word2, miasstrchr(word2,'o'));
  //printf("search for %s in %s ---> %s", word2, word3, miasstrstr(word

  printf("C FUNCTIONS: \n ----------------------------------------- \n");
  printf("length of %s = %d \n", word, strlen(word));
  printf("copy of %s --> %s \n", word2, strcpy(word4,word2));
  strcpy(word6, word);
  printf("concatenate 3 chars of %s to %s --> %s \n", word2, word, strncat(word6, word2, 3));
  printf("%s > %s? %d \n", word2, word, strcmp(word2,word));
  printf("search for 'o' in %s --> %s \n", word2, strchr(word2,'o'));
}

int miasstrlen(char *s){
  int cnt=0;
  while (*s){
    s++;
    cnt++;
  }
  return cnt;
}

char * miasstrcpy(char *dest, char *source){
  int i=0;
  while (*(source+i)){
    *(dest+i)=*(source+i);
    i++;
  }
  *(dest+i)=0;
  return dest;
}

char * miasstrncat(char *dest, char *source, int n){
  int s=miasstrlen(dest);
  dest+=s;
  int i;
  for (i=0;i<n;i++)
    *(dest+i)=*(source+i);
  *(dest+i)=0;
  dest-=s;
  return dest;
}

int miasstrcmp(char *s1, char *s2){
  char d=*s1-*s2;
  if (d) return d;
  if (!*s1) return 0;
  return miasstrcmp(s1++,s2++);
}


char * miasstrchr(char *s, char c){
  while (s){
    if (*s==c) return s;
    s++;
  }
}
