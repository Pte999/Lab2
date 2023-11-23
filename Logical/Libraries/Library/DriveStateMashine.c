
#include <bur/plctypes.h>
#ifdef __cplusplus
	extern "C"
	{
#endif
	#include "Library.h"
#ifdef __cplusplus
	};
#endif
/* TODO: Add your comment here */
void DriveStateMashine(struct DriveStateMashine* inst)
{
	/*TODO: Add your code here*/
	UINT mask = inst->state & 0x6f;
	inst->command = CMD_ENABLED;
	inst->command = CMD_SWITCHED_ON;
}
