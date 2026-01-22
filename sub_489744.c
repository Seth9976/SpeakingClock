// 函数: sub_489744
// 地址: 0x489744
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char var_5 = 0
HMODULE hLibModule = LoadLibraryA(sub_490140(arg1))

if (hLibModule u< 0x20)
    return zx.d(var_5)

int32_t __saved_ebp
int32_t* var_1c_1 = &__saved_ebp
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char var_5_1 = sub_489740()
fsbase->NtTib.ExceptionList = ExceptionList
int32_t var_1c_2 = 0x4897a8
return FreeLibrary(hLibModule)
