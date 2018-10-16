#include <stdio.h>
#include "func1.h"
#include "func2.h"

void preprocess(){
	printf("do some preprecessing\n");
}

void postprocess(){
	printf("do some postprocessing\n");
}

void turbo_on(){
	printf("turbo on\n");
}

void turbo_off(){
	printf("turbo off\n");
}

void clear(){
	printf("clear \n");
}

int main(void){
	preprocess();	
	turbo_on();

	func1();

	func2();
	
	turbo_off();
	postprocess();
	clear();
	
	printf("Good bye Marco \n\n\n");
	return 0;
}
	

