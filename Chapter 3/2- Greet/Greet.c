#include <stdio.h>

void bye(void);
void greet2(char* name);
void greet(char* name);

int main() {

	greet("adit");

	return 0;
}

void bye(void) {
	printf("bye!\n");
}

void greet2(char* name) {
	printf("how are you, %s?\n", name);
}

void greet(char* name) {
	printf("hello, %s!\n", name);
	greet2(name);
	printf("getting ready to say bye...\n");
	bye();
}