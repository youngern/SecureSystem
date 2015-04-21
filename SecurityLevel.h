#ifndef _SECURITYLEVELH_
#define _SECURITYLEVELH_

#include <stdlib.h>
struct SecurityLevel{
   int level;
};

typedef int bool;
enum{false, true};

static const struct SecurityLevel HIGH = {1};
static const struct SecurityLevel LOW = {0};

#define HIGH HIGH.level
#define LOW LOW.level
struct SecurityLevel *createSLdef();
struct SecurityLevel *createSLset(int set);
static bool dominates(struct SecurityLevel *s1, struct SecurityLevel *s2);

#endif
