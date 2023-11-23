/* Automation Studio generated header file */
/* Do not edit ! */
/* Library  */

#ifndef _LIBRARY_
#define _LIBRARY_
#ifdef __cplusplus
extern "C" 
{
#endif

#include <bur/plctypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
/* Datatypes and datatypes of function blocks */
typedef enum DoorStates
{	ST_INIT,
	ST_UNKNOWN,
	ST_OPEN,
	ST_CLOSE,
	ST_ACC_POS,
	ST_ACC_NEG,
	ST_POS,
	ST_NEG,
	ST_DEC_POS,
	ST_DEC_NEG
} DoorStates;

typedef enum DriveStates
{	CMD_DISABLE_VOLTAGE = 0,
	CMD_ENABLED = 15,
	CMD_SHUTDOWN = 6,
	STATE_READY = 33,
	STATE_DISABLED = 64,
	CMD_SWITCHED_ON = 7,
	STATE_SWITCHED_ON = 35
} DriveStates;

typedef struct DriveStateMashine
{
	/* VAR_INPUT (analog) */
	unsigned short state;
	/* VAR_OUTPUT (analog) */
	unsigned short command;
	signed short speed;
	/* VAR_INPUT (digital) */
	plcbit enable;
} DriveStateMashine_typ;

typedef struct LedStateMachine
{
	/* VAR_INPUT (analog) */
	unsigned short state;
	/* VAR_OUTPUT (analog) */
	signed short timer;
	/* VAR_OUTPUT (digital) */
	plcbit led1;
	plcbit led2;
	plcbit led3;
	plcbit led4;
} LedStateMachine_typ;

typedef struct DoorStateMachine
{
	/* VAR_INPUT (analog) */
	enum DoorStates state;
	signed short speed;
	/* VAR_INPUT (digital) */
	plcbit s1;
	plcbit s2;
	plcbit s3;
	plcbit s4;
	plcbit direction;
	plcbit newParam7;
	plcbit newParam8;
	plcbit newParam9;
	plcbit newParam;
} DoorStateMachine_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void DriveStateMashine(struct DriveStateMashine* inst);
_BUR_PUBLIC void LedStateMachine(struct LedStateMachine* inst);
_BUR_PUBLIC void DoorStateMachine(struct DoorStateMachine* inst);


#ifdef __cplusplus
};
#endif
#endif /* _LIBRARY_ */

