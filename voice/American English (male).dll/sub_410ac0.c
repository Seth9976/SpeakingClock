// 函数: sub_410ac0
// 地址: 0x410ac0
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_14 = ebx
int32_t esi
int32_t var_18 = esi
int32_t edi
int32_t var_1c = edi
int32_t var_10 = 0
int32_t edx
int32_t var_c = edx
int32_t* var_20 = &var_4
int32_t (* var_24)(void* arg1, void* arg2) = j_sub_40338c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_411e34()

if ((*(*arg1 + 0x14))(ExceptionList, var_24, var_20) - 1 s>= 0)
    int32_t i
    
    do
        (*(*ebp_1[-1] + 0xc))(arg1)
        int32_t esi_2
        i, ebp_1, esi_2 = sub_411edc(ebp_1[-2], ebp_1[-3])
    while (i != 1)

ebp_1[-2]
sub_411e3c()
fsbase->NtTib.ExceptionList = arg1
__return_addr = sub_410b3d
sub_4039ec(&ebp_1[-3])
return &ebp_1[-3]
