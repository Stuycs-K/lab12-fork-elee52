#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <errno.h>
#include <string.h>


int main(){
  // pid_t p;
  // p = fork();
  // if(p<0){
  //   perror("fork fail");//output to stderr instead of stdout
  //   exit(1);
  // } else if ( p == 0){
  //     printf("Hello from Child!\n");
  // }else{
  //     printf("Hello from Parent!\n");
  // }
  forker();
}
