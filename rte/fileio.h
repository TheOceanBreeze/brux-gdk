/*===============*\
| FILE I/O HEADER |
\*===============*/



#ifndef _FILEIO_H_
#define _FILEIO_H_

bool xyFileExists(const char* file);
void sqDecodeJSONTable(HSQUIRRELVM v, cJSON *Item);
SQInteger sqDecodeJSON(HSQUIRRELVM v);

#endif
