#include <stdio.h>
#include "func1.h"
#include "func2.h"

void preprocess(){
	printf("do some preprecessing\n");
}

void postprocess(){
	printf("do some postprocessing\n");
}

int main(void){
	postprocess();
	func1();

	preprocess();
	func2();
	return 0;
}
	

