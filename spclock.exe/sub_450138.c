// 函数: sub_450138
// 地址: 0x450138
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* eax = data_4ac4e0

if (*(eax + 0xd) == 0)
    return eax

char eax_2 = arg1[0xc].b
int32_t var_c
var_c:3.b = eax_2
var_c:2.b = *(arg1 + 0x41)
int32_t __saved_ebp
int32_t* var_10 = &__saved_ebp
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (eax_2 != 0)
    sub_4506a8(arg1, 0)
else
    sub_4506a8(arg1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t var_10_1 = 0x4501b3
sub_4506a8(arg1, var_c:3.b)
*(arg1 + 0x41) = var_c:2.b
return arg1
