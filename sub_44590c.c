// 函数: sub_44590c
// 地址: 0x44590c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
void* var_18
__builtin_memset(&var_18, 0, 0x14)
int32_t ebx
int32_t var_1c = ebx
int32_t esi
int32_t var_20 = esi
int32_t edi
int32_t var_24 = edi
int32_t* var_28 = &var_4
int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_8
sub_404c20(&var_8, *(*(arg1 + 8) + 0x68))
void* ebx_1 = 1
void* i = sub_40dc14(sub_445a7f+5, var_8)

while (i != 0)
    void* eax_5 = sub_446b48(*(*(arg1 + 4) + 0x54))
    sub_405080(i - ebx_1, ebx_1, var_8, eax_5 + 0xc)
    void* ebx_2
    
    if (*(data_4ac4e0 + 0xc) != 0)
        int32_t var_14
        sub_405080(0x7fffffff, i + 1, var_8, &var_14)
        ebx_2 = sub_40dc14(sub_445a7f+5, var_14)
        
        if (ebx_2 != 0)
            ebx_2 = ebx_2 + i + 1 - 1
    else
        ebx_2 = sub_43ff50(sub_445a7f+5, var_8, i + 1)
    
    if (ebx_2 == 0)
        void* var_10_1 = var_8
        
        if (var_10_1 != 0)
            var_10_1 = *(var_10_1 - 4)
        
        ebx_2 = var_10_1 + 1
    
    sub_405080(ebx_2 - i - 1, i + 1, var_8, eax_5 + 0x14)
    ebx_1 = ebx_2 + 1
    
    if (*(data_4ac4e0 + 0xc) != 0)
        sub_405080(0x7fffffff, ebx_1, var_8, &var_18)
        i = sub_40dc14(sub_445a7f+5, var_18)
        
        if (i != 0)
            i = ebx_1 + i - 1
    else
        i = sub_43ff50(sub_445a7f+5, var_8, ebx_1)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_28_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_445a75
sub_404bac(&var_18, 2)
void** result = &var_8
sub_404b88(result)
return result
