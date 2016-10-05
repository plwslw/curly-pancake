#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int len(char *s);
char * miasstrcpy(char *dest, char *source);
char * miasstrncat(char *dest, char *source, int n);
int miasstrcmp(char *s1, char *s2);
char * miasstrchr(char *s, char c);
  
int main(){
  char word[]="Tiger ";
  char word2[]="Lion ";
  char word3[]="In the Jungle, the mighty Jungle, the Lion sleeps tonight. ";
  char word4[100];
  printf("MY FUNCTIONS: \n ----------------------------------------- \n");
  printf("length of %s = %d \n", word, miasstrlen(word));
  printf("copy of %s --> %s \n", word2, miasstrcpy(word4,word2));
  printf("concatenate 3 chars of %s to %s --> %s \n", word, word2, miasstrncat(word, word2, 3));
  printf("%s > %s? %d \n", word2, word, miasstrcmp(word2,word));
  printf("search for 'o' in %s --> %s", word2, miasstrchr(word2,'o'));
  //printf("search for %s in %s ---> %s", word2, word3, miasstrstr(word
  return 17;
}

int len(char *s){
  if (!s) return 0;
  return len(s++)++;
}

char * miasstrcpy(char *dest, char *source){
  int i=0;
  while (*source){
    *(dest+i)=*(source+i);
    i++;
  }
  *(dest+i+1)=0;
  return *dest;
}

char * miasstrncat(char *dest, char *source, int n){
  char *dest1=dest;
  while (*dest)
    dest++;
  int i;
  for (i=0;i<n;i++)
    *(dest+i)=*(source+i);
  (dest+i)=0;
  return dest1;
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
