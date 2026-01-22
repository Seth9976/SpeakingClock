// 函数: sub_42b8e8
// 地址: 0x42b8e8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* eax = *(arg1 + 0x10)

if (*(eax + 8) != 0)
    return *(eax + 8)

sub_42a578(data_4b1a98)
int32_t __saved_ebp
int32_t* var_1c = &__saved_ebp
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(eax + 8) == 0)
    LOGPEN plpen
    plpen.lopnStyle = zx.d(*((zx.d(*(eax + 0x1c)) << 1) + &data_4aaeb4))
    plpen.lopnWidth.x = *(eax + 0x18)
    plpen.lopnColor = sub_42ad8c(*(eax + 0x14))
    *(eax + 8) = CreatePenIndirect(&plpen)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t var_1c_1 = 0x42b975
return sub_42a584(data_4b1a98)
