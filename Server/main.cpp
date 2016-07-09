/*V1.1*/
//branch 2
#include "windows.h"
#include "stdio.h"
#include "Multiprotoclserver.h"


void main()
{
	CMultiProtoclServer mps;
	mps.InitServer();
	mps.StartWork();
	mps.EndWork();
}
