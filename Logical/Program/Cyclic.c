
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _CYCLIC ProgramCyclic(void)
{
	driveSM.speed = 200;
	DriveStateMashine(&driveSM);
	ledSM.state=ST_POS;
	LedStateMachine(&ledSM);
	
}
