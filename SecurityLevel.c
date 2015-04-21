/*SecurityLevel.c*/
#include "SecurityLevel.h"

/*default creation*/
struct SecurityLevel *createSLdef(){
  struct SecurityLevel *newLevel = malloc(sizeof(struct SecurityLevel));
  newLevel->level = LOW;
  return newLevel;
}
/*creation with set level*/
struct SecurityLevel *createSLset(int set){
  struct SecurityLevel *newLevel = malloc(sizeof(struct SecurityLevel));
  newLevel->level = set;
  return newLevel;
}

static bool dominates(struct SecurityLevel *s1, struct SecurityLevel *s2){
  return s1->level >= s2->level;
}
 
