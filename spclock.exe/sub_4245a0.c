// 函数: sub_4245a0
// 地址: 0x4245a0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
sub_404074(arg1, arg2)
char var_9 = arg2.b

if ((arg1[7].b & 8) == 0)
    (*(*data_4b19b4 + 0x14))()

int32_t* var_10 = &var_4
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1[0x14].b != 0)
    (*(*arg1 + 0x34))()

if (data_4aab54:2.w != 0)
    data_4aab58
    data_4aab54()

uint32_t edx_3
edx_3.b = var_9 & 0xfc
sub_423380(arg1, edx_3)
fsbase->NtTib.ExceptionList = ExceptionList
return (*(*data_4b19b4 + 0x18))(sub_42462a)
