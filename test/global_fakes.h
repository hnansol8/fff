
#ifndef GLOBAL_FAKES_H_
#define GLOBAL_FAKES_H_

#include "../fff.h"
#include "string.h"


////  Imaginary production code header file ///
void voidfunc1(int);
void voidfunc2(char, char);
long longfunc0();

enum MYBOOL { FALSE = 899, TRUE };
struct MyStruct {
    int x;
    int y;
};
enum MYBOOL enumfunc();
struct MyStruct structfunc();
////  End Imaginary production code header file ///

DECLARE_FAKE_VOID_FUNC1(voidfunc1, int);
DECLARE_FAKE_VOID_FUNC2(voidfunc2, char, char);
DECLARE_FAKE_VALUE_FUNC0(long, longfunc0);
DECLARE_FAKE_VALUE_FUNC0(enum MYBOOL, enumfunc0);
DECLARE_FAKE_VALUE_FUNC0(struct MyStruct, structfunc0);
#ifndef __cplusplus
DECLARE_FAKE_VALUE_FUNC3(int, strlcpy3, char* const, const char* const, const size_t);
#endif /* __cplusplus */

#endif /* GLOBAL_FAKES_H_ */
