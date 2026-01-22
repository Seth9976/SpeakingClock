// 函数: sub_48c2bc
// 地址: 0x48c2bc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t var_8 = 0
void* var_c = nullptr
int32_t var_10 = 0
int32_t var_14 = 0
int32_t ebx
int32_t var_18 = ebx
int32_t esi
int32_t var_1c = esi
int32_t edi
int32_t var_20 = edi
int64_t** esi_1 = arg2
void* edi_1 = arg1
int32_t* var_24 = &var_4
int32_t (* var_28)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(edi_1 + 0x4c) == 0)
    sub_4032cc(0, &var_c)
    ebp_1, esi_1, edi_1 = sub_409a54(var_c, sub_48c36f+5, &var_8)
    sub_404bdc(edi_1 + 0x4c, ebp_1[-1])

char ebx_1 = *(edi_1 + 0x58)

if (ebx_1 == 3)
    sub_404bdc(esi_1, *(edi_1 + 0x4c))
else
    arg2.b = 1
    int32_t* esi_2 = sub_490638(ebx_1, arg2.b, &ebp_1[-3])
    int64_t* eax_3 = ebp_1[-3]
    sub_409b1c(*(edi_1 + 0x4c), &ebp_1[-4])
    sub_404ea0(esi_2, eax_3, ebp_1[-4])

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_24_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_48c362
return sub_404bac(&ebp_1[-4], 4)
