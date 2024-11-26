#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <errno.h>
#include <string.h>
// #include "forker_h"
//create two forks
//print pid_t
//use dev urandom to get random number 1-5
//use pid for random
//sleep that long
//child dies, parent dies, other child dies
void forker(){
  pid_t p;
  p = fork();
  if(p<0){
    perror("fork fail");//output to stderr instead of stdout
    exit(1);
  } else if ( p == 0){
      printf("Hello from Child!\n");
  }else{
      printf("Hello from Parent!\n");
  }
}
