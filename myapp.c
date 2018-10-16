#include <stdio.h>
#include "func1.h"
#include "func2.h"

void preprocess(){
	printf("do some preprecessing\n");
}

int main(void){
	func1();

	preprocess();
	func2();
	return 0;
}
	

