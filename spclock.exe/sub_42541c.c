// 函数: sub_42541c
// 地址: 0x42541c
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
int32_t* edi_1 = arg2
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
arg2.b = 1
int32_t* eax = sub_4252fc(0x4251ac, arg2, edi_1)
eax[2] = *(arg1 + 0x18)
sub_419f9c(*(arg1 + 0x10), eax)
*(arg1 + 0x18)
(*(*edi_1 + 0x24))(ExceptionList, var_20, var_1c)
sub_406550(&var_8)

if (sub_40eb24(edi_1, 0x4254cc, &var_8) != 0)
    sub_419f9c(*(arg1 + 0x14), eax)

*(arg1 + 0x18) += 1
void* edx_3 = arg1

if (edx_3 != 0)
    edx_3 -= 0xfffffff8

sub_406594(arg3, edx_3, 0x4254dc, var_8)
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_4254c3
int32_t* result = &var_8
sub_406550(result)
return result
