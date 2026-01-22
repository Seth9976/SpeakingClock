// 函数: sub_432d60
// 地址: 0x432d60
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* esi = *(arg1[-3] + 4)

if (esi != 0)
    sub_403c68(esi)

sub_402ec4(arg1[-2])
void* result = arg1[-1]
int32_t ebx = *(result + 4)

if (ebx == 0)
    *arg1
    return result

arg1[-2] = ebx
arg1[-3] = arg1[-2]
sub_432b40(arg1[-1])
int32_t* var_4 = arg1
int32_t (* var_8)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1[-1] + 4) = *arg1[-3]
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_4_1)() = sub_432d60
return sub_432b4c(arg1[-1])
