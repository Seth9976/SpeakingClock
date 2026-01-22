// 函数: sub_4649e0
// 地址: 0x4649e0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_2c = ebx
int32_t esi
int32_t var_30 = esi
int32_t edi
int32_t var_34 = edi
int64_t* var_28 = nullptr
int32_t var_c = *arg2
int32_t var_8 = arg2[1]
int32_t* var_10 = arg3
int32_t* var_38 = &var_4
int32_t (* var_3c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_1 = (*(*arg1 + 8))(ExceptionList, var_3c, var_38)
int32_t var_14

if (var_14 == 0x12)
    sub_404b88(arg4)
else if (eax_1 != 0 && (var_14 == 2 || var_14 == 0x14))
    int32_t var_24
    sub_4570f0(eax_1, &var_24)
    int32_t ecx = (**arg1)()
    var_24 -= (var_24 - *(eax_1 + 0x40)) * 2
    int64_t* var_20 = var_20 - (var_20 - *(eax_1 + 0x44)) * 2
    int32_t var_1c
    int32_t var_1c_1 = var_1c - (*(eax_1 + 0x48) - (var_1c - var_24)) * 2
    int32_t var_18
    int32_t var_18_1 = var_18 - (*(eax_1 + 0x4c) - (var_18 - var_20)) * 2
    sub_4577d8(ecx, &var_28)
    sub_404bdc(arg4, var_28)
    int32_t* eax_24 = var_10
    *eax_24 = var_24
    int64_t** edi_4 = &eax_24[1]
    int64_t** esi_6 = &var_20
    *edi_4 = *esi_6
    int32_t* edi_5 = &edi_4[1]
    void* esi_7 = &esi_6[1]
    *edi_5 = *esi_7
    edi_5[1] = *(esi_7 + 4)

fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_464ac8
int64_t** result = &var_28
sub_404b88(result)
return result
