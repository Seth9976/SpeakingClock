// 函数: sub_428810
// 地址: 0x428810
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
int32_t edi
int32_t var_18 = edi
int32_t var_8 = 0
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi_2

if ((*(**(arg1 + 8) + 0x54))(ExceptionList, var_20, var_1c) s< 0)
    esi_2 = sub_428104(arg1)
else
    esi_2 = (*(**(arg1 + 8) + 0x18))()

int32_t __saved_edx_1
int32_t __saved_edx = __saved_edx_1
void* const var_10_1 = &data_4288cc
int32_t var_14_1 = arg2
sub_404f1c(&var_8, 3)

if ((*(*esi_2 + 0x58))() s< 0)
    (*(*esi_2 + 0x38))()
else
    (*(*esi_2 + 0x20))()

fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_4288b8
int32_t* result = &var_8
sub_404b88(result)
return result
