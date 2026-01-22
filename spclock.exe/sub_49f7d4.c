// 函数: sub_49f7d4
// 地址: 0x49f7d4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_8 = ecx
void* const var_8_1 = arg1
struct _EXCEPTION_REGISTRATION_RECORD* result = nullptr
arg1.b = 1

if ((*(var_8_1 + 0x1c) & 0x10) != 0)
    if (*(var_8_1 + 0xe1) != 0 || *(var_8_1 + 0xe0) != 0)
        arg1.b = 1
    else
        arg1 = nullptr

if (arg1.b != 0)
    int32_t __saved_ebp
    int32_t* var_18_1 = &__saved_ebp
    int32_t (* var_1c_1)() = j_sub_4042b4
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    *(var_8_1 + 0x10c) = sub_43248c(*(var_8_1 + 0x34))
    fsbase->NtTib.ExceptionList = ExceptionList
    
    if (*(var_8_1 + 0x40) == 0 || *(var_8_1 + 0x44) == 0)
        __builtin_memset(var_8_1 + 0x110, 0x49f8bc, 0x80)
    else
        sub_409cd8(var_8_1 + 0x110, sub_405018(*(var_8_1 + 0x40)), 0x7f)
        *(var_8_1 + 0x18f) = 0
    
    result.b = 1

return result
