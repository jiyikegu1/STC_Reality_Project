
#include <beep.h>
#include <delay_ms.h>
#include "SoundPlay.h"
#include "music.h"


void Beep()		
{
	  Play(Music_Girl,0,3,360);	
		Delay_ms(500);
		Play(Music_Same,0,3,360);
		Delay_ms(500);
		Play(Music_Two,0,3,360);
		Delay_ms(500);
}
