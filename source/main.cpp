#include <string>
#include <3ds.h>
#include "write.h"
int main() {
	int setup = 0;
	gfxInitDefault();
	consoleInit(GFX_TOP, NULL);
	while (aptMainLoop())
	{
		gspWaitForVBlank();
		hidScanInput();
		 if(setup == 0){
		 write();
		 //setup
		 
		 setup = 1;
		 }
	 
		//loop
	 
		u32 kDown = hidKeysDown();
		if (kDown & KEY_START)
			break; 

		gfxFlushBuffers();
		gfxSwapBuffers();
	}

	gfxExit();
	return 0;
}
