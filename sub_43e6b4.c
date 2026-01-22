// 函数: sub_43e6b4
// 地址: 0x43e6b4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* var_8 = nullptr
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t edi
int32_t var_14 = edi
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx
int32_t ecx_1 = sub_4577d8(ecx, &var_8)
*(arg2 + 4)
char eax_2
void* ebp_1
int32_t esi_1
eax_2, ebp_1, esi_1 = sub_46be60(ecx_1, var_8)
char eax_4

if (eax_2 != 0)
    esi_1.w = 0xffb6
    eax_4 = sub_403e64(arg1, esi_1)

if (eax_2 == 0 || eax_4 == 0)
    sub_45ecdc()
else
    (*(*arg1 + 0xd4))()
    esi_1.w = 0xffb3
    
    if (sub_403e64(arg1, esi_1) != 0)
        (*(*arg1 + 0xe0))()
    
    *(arg2 + 0xc) = 1

fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_43e749
sub_404b88(ebp_1 - 4)
return ebp_1 - 4
