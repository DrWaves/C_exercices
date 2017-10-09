#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>


typedef struct  relative_time relative_time;
struct relative_time {
  int days;
  int hours;
  int minutes;
  int seconds;
};

struct relative_time* create(int days, int hours, int minutes, int seconds);
void destroy(relative_time* target );
void CheckInvariant (relative_time* const target);
void printtime (relative_time* const target);
void isBigger (relative_time* const target1, relative_time* const target2);
struct relative_time* add (relative_time* const arg1, relative_time* const arg2,relative_time*  target);


int main(int argc, char const *argv[]) {

  relative_time* time1=create(atoi(argv[1]),atoi(argv[2]),atoi(argv[3]),atoi(argv[4]));
  printtime(time1);
  relative_time* time2=create(atoi(argv[5]),atoi(argv[6]),atoi(argv[7]),atoi(argv[8]));
  printtime(time2);
  relative_time* x=create(0,0,0,0);
  add(time1,time2,x);
  printtime(x);
  isBigger(x,time2);


  destroy(time1);
  destroy(time2);
  destroy(x);
  return 0;
}

struct relative_time* create(int days, int hours, int minutes, int seconds){
  relative_time* new_time = (relative_time*)malloc(sizeof(struct relative_time));
  assert( NULL != new_time);
  new_time->days = days;
  new_time->hours = hours;
  new_time->minutes = minutes;
  new_time->seconds = seconds;
  CheckInvariant(new_time);
  return new_time;
}

void destroy(relative_time* target ){
  free(target);
}

void CheckInvariant(relative_time* const target ){

  // IF THE RETURN = 1 THE DATAS ARE VALID
  // IF THE RETURN  = 0 THE DATAS ARE INVALID
  bool flag1=0;
  bool flag2=0;
  bool flag3=0;
  bool flag4=0;

  if(target->days>=0){
    flag1=1;
  };
  if(target->hours>=0 && target->hours<25 ){
    flag2=1;
  };
  if(target->minutes>=0 && target->minutes<61 ){
    flag3=1;
  };
  if(target->seconds>=0 && target->seconds<61 ){
    flag4=1;
  };
  if (flag1*flag2*flag3*flag4==1) {
    printf("THE DATAS ARE VALID \n");
  } else if (flag1*flag2*flag3*flag4==0){
    printf("THE DATAS ARE INVALID\n");
    assert(0);
  }
}
void printtime(relative_time* const target ){
  CheckInvariant(target);
  printf(" { days : %d; hours %d; minutes %d; seconds %d }\n", target->days, target->hours, target->minutes, target->seconds );
}

void isBigger (relative_time* const target1, relative_time* const target2){
  CheckInvariant(target1);
  CheckInvariant(target2);
  if (target1->days>target2->days) {
    printf("THE FIRST TIME IS BIGGER\n");
  }
  else if (target1->days<target2->days) {
    printf("THE SECOND TIME IS BIGGER\n");
  }
  else if (target1->hours>target2->hours) {
    printf("THE FIRST TIME IS BIGGER\n");
  }
  else if (target1->hours<target2->hours) {
    printf("THE SECOND TIME IS BIGGER\n");
  }
  else if (target1->minutes>target2->minutes) {
    printf("THE FIRST TIME IS BIGGER\n");
  }
  else if (target1->minutes<target2->minutes) {
    printf("THE SECOND TIME IS BIGGER\n");
  }
  else if (target1->seconds>target2->seconds) {
    printf("THE FIRST IS BIGGER\n");
  }
  else if (target1->seconds<target2->seconds) {
    printf("THE SECOND IS BIGGER\n");
  }
  else if(target1->days==target2->days && target1->hours==target2->hours && target1->minutes==target2->minutes && target1->seconds==target2->seconds){
    printf("THE FIRST AND THE SECOND ARE EQUAL\n");
  }

};
struct relative_time* add (relative_time* const arg1, relative_time* const arg2,relative_time*  target){
  CheckInvariant(arg1);
  CheckInvariant(arg2);
  target->seconds=(arg1->seconds+arg2->seconds)%60;
  target->minutes=((arg1->minutes+arg2->minutes)+(arg1->seconds+arg2->seconds)/60)%60;
  target->hours=((arg1->hours+ arg2->hours) +((arg1->minutes+arg2->minutes)+(arg1->seconds+arg2->seconds)/60)/60)%24;
  target->days=(arg1->days + arg2->days) +((arg1->hours+ arg2->hours) +((arg1->minutes+arg2->minutes)+(arg1->seconds+arg2->seconds)/60)/60)/24;
  return target;
}
