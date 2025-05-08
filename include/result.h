#ifndef RESULT_H
#define RESULT_H

/// Možne napake pri izvajanju operacij.
typedef enum {
	SUCCESS = 0,
	READER_FAIL,
	PARSER_FAIL,
	CUSTOM,
} Result_OperationCode;

/// Zapakira vsa potrebna sporočila za dober error message.
typedef struct {
	Result_OperationCode error_code;
	int linenr;
	char *file;
	char *context;
} Result;

/// Evaluira sporočilo shranjeno Result struct.
void handle_result(Result res);

#endif // RESULT_H
