// Cyberstorm	- Needs some gpl crap or sumtin

#include "cl_time.h"

void CL_ClockInit( qtime_t *tt) {
	q3_time = tt;
	q3_timeInit_b = qtrue;
}

//Convert time struct to ascii string
void CL_GetTime( char * result ) {
	sprintf(result, "[%.2d:%.2d:%.2d]\0",
        q3_time->tm_hour,
        q3_time->tm_min, q3_time->tm_sec
        );
}

//Incerement time - Doesnt need to have msec precision
void CL_ClockTick( int ft ) {
	if(q3_tick < 1000) {
		q3_tick += ft;
	} else {
		Com_RealTime(q3_time);
		q3_tick = ft;
	}
}