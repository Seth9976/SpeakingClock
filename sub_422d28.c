// 函数: sub_422d28
// 地址: 0x422d28
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* var_18 = &var_4
int32_t var_1c = 0x422dbf
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1

if (*(arg1 + 0xd) == 0)
    int32_t* var_24_1 = &var_4
    int32_t (* var_28_1)() = j_sub_404188
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    (*(*arg1 + 4))(ExceptionList, var_28_1, var_24_1)
    fsbase->NtTib.ExceptionList = ExceptionList

fsbase->NtTib.ExceptionList = ExceptionList_1
char ebx = *(arg1 + 0xf)
uint32_t esi = arg1[5]
(**arg1)(0x422dc6)
arg1[4].b = 1
sub_422b2c()

if (ebx != 0)
    sub_403c68(arg1)

sub_404b6c(esi)
noreturn
