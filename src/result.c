#include "../include/result.h"
#include <stdio.h>
#include <stdlib.h>

void handle_result(Result res) {
	switch (res.error_code) {
		case SUCCESS:
			break;

		case READER_FAIL:
			fprintf(
				stderr,
				"READER_FAIL: error with handling the file\nOccured in '%s' at "
				"line %d: %s\n",
				res.file, res.linenr, res.context
			);
			exit((int)READER_FAIL);

		case PARSER_FAIL:
			fprintf(
				stderr,
				"PARSER_FAIL: error with parsing file contents\nOccured in '%s' at "
				"line %d: %s\n",
				res.file, res.linenr, res.context
			);
			exit((int)PARSER_FAIL);

		case CUSTOM:
			fprintf(
				stderr,
				"Error occured in '%s' at line %d: %s\n",
				res.file, res.linenr, res.context
			);
			exit((int)CUSTOM);
	}
}
