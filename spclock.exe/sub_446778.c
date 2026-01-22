// 函数: sub_446778
// 地址: 0x446778
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_14 = ebx
int32_t var_10 = 0
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char var_5 = 0

if ((*(arg1 + 0x64) & 0x40) != 0 && ((*(arg1 + 0x66) & 1) != 0 || *data_4ac1d0 == 0))
    char var_5_1 = 0x20

if ((*(arg1 + 0x64) & 0x40) == 0)
    int32_t* var_24_1 = &var_4
    void* ecx
    sub_446614(*(arg2 + 0x1c), arg1 + 0x80, ecx)
    *(arg1 + 0x80)
    (*(**(arg1 + 0x84) + 0x38))()
else
    int32_t* var_24 = &var_4
    ebp_1 = sub_44665c(*(arg2 + 0x1c), arg2)
    (*(**(ebp_1[-2] + 0x84) + 0xc))()
    sub_404bdc(ebp_1[-2] + 0x80, ebp_1[-3])

int32_t var_8
fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_446838
sub_404b88(&ebp_1[-3])
return &ebp_1[-3]
