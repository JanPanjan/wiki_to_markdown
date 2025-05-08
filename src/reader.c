#include "../include/reader.h"
#include "../include/result.h"
#include <stdio.h>
#include <stdlib.h>

const unsigned int MAX_BUFFER_SIZE;

Buffer *get_filenames(const char *dir) {}

Buffer *read_file_contents(const char *fname) {
	FILE *file = fopen(fname, "r");
	if (file == NULL) {
		handle_result((Result){.file = __FILE_NAME__,
			.linenr = __LINE__,
			.error_code = READER_FAIL,
			.context = "error opening file"}
		);
	}

	Buffer *content = malloc(sizeof(Buffer));
	content->raw = malloc(MAX_BUFFER_SIZE);

	int i = 0;
	char c;

	while ((c = fgetc(file)) != EOF) {
		content->raw[i] = c;
		i++;
	}

	fclose(file); // ker smo pridni

	handle_result((Result){.file = __FILE_NAME__,
		.linenr = __LINE__,
		.error_code = SUCCESS,
		.context = "successfully read file"}
	);

	return content;
}
