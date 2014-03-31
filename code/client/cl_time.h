// Cyberstorm	- Needs some gpl crap or sumtin

#include "../game/q_shared.h"
//#include "qcommon.h"
//typedef time_t q3_time;
extern qtime_t;
extern int Com_RealTime( qtime_t * );
qboolean q3_timeInit_b;
qtime_t *q3_time;
static int q3_tick;

void CL_ClockInit( qtime_t *tt);
void CL_GetTime( char *);
void CL_ClockTick( int );
