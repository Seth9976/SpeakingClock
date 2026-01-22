// 函数: sub_491094
// 地址: 0x491094
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t var_18
__builtin_memset(&var_18, 0, 0x14)
int32_t ebx
int32_t var_1c = ebx
int32_t esi
int32_t var_20 = esi
void* esi_1 = arg1
int32_t* var_24 = &var_4
int32_t (* var_28)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_8
sub_404c20(&var_8, arg2)

if (sub_486724(var_8) == 0)
    void* var_10
    sub_409b54(var_8, &var_10)
    
    if (sub_486724(var_10) != 0)
        sub_404e54(&var_8, sub_491173+5)
else
    void* var_c
    sub_4032cc(0, &var_c)
    ebp_1, esi_1 = sub_409a54(var_c, sub_491173+5, &var_8)

char ebx_2 = *(esi_1 + 0x64)

if (ebx_2 == 3)
    sub_404bdc(esi_1 + 0x68, ebp_1[-1])
else
    void* esi_2 = sub_490638(ebx_2, 1, &ebp_1[-4])
    int64_t* eax_9 = ebp_1[-4]
    sub_409b1c(ebp_1[-1], &ebp_1[-5])
    sub_404ea0(esi_2 + 0x68, eax_9, ebp_1[-5])

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_24_1)(int32_t* arg1 @ ebp, int32_t arg2) = sub_491167
return sub_404bac(&ebp_1[-5], 5)
