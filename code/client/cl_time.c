#include "cl_time.h"

void CL_ClockInit( qtime_t *tt) {
	q3_time = tt;
}

//Convert time struct to ascii string
void CL_GetTime( char * result ) {
/*	int ct;
	int tm;
	int i;

	//str[0] = ']';
	//str[1] = ' ';
	ct = q3_clock/1000;
	for(i = 0; ct > 9; ++i) {
		tm = ct % 10;
		ct = (ct - tm)/10;
		str[i] = tm+48;
	}
	//++i;
	str[i] = ct+48;
	++i;
	str[i] = '|';
	++i;
	str[i] = ']';
	++i;
	str[i] = ' ';*/
	static char wday_name[7][4] = {
        "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"
    };
    static char mon_name[12][4] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };
    //static char result[26];

    /*sprintf(result, "%.3s %.3s%3d %.2d:%.2d:%.2d %d ]\n",
        wday_name[q3_time->tm_wday],
        mon_name[q3_time->tm_mon],
        q3_time->tm_mday, q3_time->tm_hour,
        q3_time->tm_min, q3_time->tm_sec,
        1900 + q3_time->tm_year);*/
	sprintf(result, "[%.2d:%.2d:%.2d]\n",
        q3_time->tm_hour,
        q3_time->tm_min, q3_time->tm_sec
        );
}
//Incerement time
void CL_ClockTick( int ft ) {
	if(q3_tick < 1000) {
		q3_tick += ft;
	} else {
		Com_RealTime(q3_time);
		q3_tick = ft;
	}
}

/*
void CL_ClockUpdate() {
	q3_time->tm_sec += q3_sec;
	if(q3_time->tm_sec > 60) {
		q3_time->tm_min++;
		if(q3_time->tm_min > 60) {
			q3_time->tm_hour++;
			if(q3_time->tm_hour > 23) {
				q3_time->tm_mday++;
				if(q3_time->tm_mday > 31) {
					q3_time->tm_
				}
			}
		}
	}
}
*/