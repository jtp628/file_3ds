#include "file.h"
#include "lib.h"
#include "write.h"

#include <string>
#include <3ds.h>

bool write() {
		printf("\n Copying from rom...\n");
		FILE *f = fopen(file, "w+b");
		fputs (*txt,f);
		int size = ftell(f);
		if (size <= 0) {
		remove(file);
		printf("\n Failed\n");
		}
		printf("\n success!");
		return true;

	}