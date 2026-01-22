// 函数: sub_432d0c
// 地址: 0x432d0c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* ebx = *(arg1 + 4)

if (ebx == 0)
    return arg1

sub_432b40(arg1)
int32_t __saved_ebp
int32_t* var_1c = &__saved_ebp
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 4) = *ebx
fsbase->NtTib.ExceptionList = ExceptionList
void* (* var_1c_1)(int32_t* arg1 @ ebp, int32_t arg2) = sub_432d60
return sub_432b4c(arg1)
