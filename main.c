#include "led.h"
#include "keyboard.h"
#include "timer.h"
//git test mz
int main(){
	
	LedInit();
	InitTimer0Match0(1000000);
	
	while(1) {
		LedStepLeft();
		WaitOnTimer0Match0();
	}
}
//test do gita