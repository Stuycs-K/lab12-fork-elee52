#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <errno.h>
#include <string.h>

//create two forks
//print pid_t
//use dev urandom to get random number 1-5
//use pid for random
//sleep that long
//child dies, parent dies, other child dies
int myfork(){
  pid_t p;
  p = fork();
  if(p<0){
    perror("fork fail");//output to stderr instead of stdout
    exit(1);
  } else if ( p == 0){
      printf("Hello from Child!: my pid_t is %d\n", p);
      srand(p);
      int r = random()%5;
      printf("ranodm num:%d\n", r);
      sleep(r);
  }else{
      printf("Hello from Parent!: my pid_t is %d\n", p);
      srand(p);
      int r = random()%5;
      printf("random num:%d\n", r);
      sleep(r);
  }
}
int main(){
  myfork();
  //myfork();
}
