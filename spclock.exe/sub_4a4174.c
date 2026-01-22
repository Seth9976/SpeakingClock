// 函数: sub_4a4174
// 地址: 0x4a4174
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = 0
int64_t* var_c = nullptr
int64_t* var_10 = nullptr
int32_t ebx
int32_t var_14 = ebx
int32_t esi
int32_t var_18 = esi
int32_t edi
int32_t var_1c = edi
sub_405008(arg1)
int32_t* var_20 = &var_4
int32_t (* var_24)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_404b88(arg2)
void* i_2 = arg1

if (i_2 != 0)
    i_2 = *(i_2 - 4)

void* i_1 = i_2

if (i_1 s> 0)
    int32_t ebx_1 = 1
    void* i
    
    do
        int32_t eax_4 = ebx_1 & 0x80000001
        
        if (eax_4 s< 0)
            eax_4 = ((eax_4 - 1) | 0xfffffffe) + 1
        
        if (eax_4 != 0)
            *(arg1 + ebx_1 - 1)
            sub_404d70()
            sub_404e54(arg2, var_10)
        else
            *(arg1 + ebx_1 - 1)
            sub_404d70()
            sub_404e54(arg2, var_c)
        
        ebx_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_20_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_4a422d
return sub_404bac(&var_10, 3)
