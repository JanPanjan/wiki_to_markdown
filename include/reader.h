#ifndef READER_H
#define READER_H

typedef struct {
	char *raw;
} Buffer;

/// Vrne imena vseh markdown datotek za predelat.
Buffer *get_filenames(const char *dir);

/// Vrne buffer s prebrano datoteko.
Buffer *read_file_contents(const char *fname);

#endif // READER_H
