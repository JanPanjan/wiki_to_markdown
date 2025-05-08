/*
 * Ta module se ukvarja z evaluacijo operacij.
 */

#ifndef RESULT_H
#define RESULT_H

/*
 * Enum možnih napak pri izvajanju programa.
 */
typedef enum {
    SUCCESS = 0,
    READER_FAIL,
    PARSER_FAIL,
    CUSTOM,
} Result_OperationCode;

/*
 * Zapakira vsa potrebna sporočila za dober error message v Result struct.
 */
typedef struct {
    Result_OperationCode error_code;
    int linenr;
    char *file;
    char *context;
} Result;

/*
 * Funkcija evaluira sporočilo shranjeno v danem Result.
 */
void handle_result(Result res);

#endif // RESULT_H
