// 函数: sub_4a0498
// 地址: 0x4a0498
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
int32_t var_c = arg2
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_49ffbc(arg1)
int32_t ebx_2
void* ebp_1
void* esi_2
ebx_2, ebp_1, esi_2 = sub_4a0730(arg1, arg3, &var_8)

if (*(ebp_1 - 4) != 0)
    char eax_3
    
    if (data_4b1dbc == 0)
        eax_3 = 0
    else
        eax_3 = (*(*data_4b1dbc + 0x24))()
    
    if (eax_3 != 0)
        sub_4a0538(esi_2, *(ebp_1 - 8), *(ebp_1 - 4), *(ebp_1 + 8), zx.d(*(ebp_1 + 0xc)))
        ebx_2.b = 1

fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_4a052c
sub_404b88(ebp_1 - 4)
return ebp_1 - 4
