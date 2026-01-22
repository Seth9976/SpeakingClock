// 函数: sub_42a738
// 地址: 0x42a738
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
int32_t edi
int32_t var_18 = edi
sub_42a578(arg1)
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi_1 = *(arg2 + 0x10)
int32_t eax_2
int32_t* ebx_2
void* ebp_1
eax_2, ebx_2, ebp_1 = sub_42a590(arg1, arg3)
ebx_2[4] = eax_2

if (edi_1 != eax_2)
    int32_t esi_1
    esi_1.w = 0xfffd
    sub_403e64(ebx_2, esi_1)

void* ebp_2 = sub_42a674(*(ebp_1 - 4), edi_1)
fsbase->NtTib.ExceptionList = arg1
__return_addr = sub_42a7a8
return sub_42a584(*(ebp_2 - 4))
