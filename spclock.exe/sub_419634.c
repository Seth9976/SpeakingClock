// 函数: sub_419634
// 地址: 0x419634
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_8 = ebx
int32_t* ebx_1 = arg1
sub_419250(data_4b19c8)
int32_t* var_c = &var_4
int32_t (* var_10)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

while (true)
    char eax_5
    int32_t ecx_1
    eax_5, ecx_1 = sub_419274(data_4b19c8, ebx_1)
    
    if (eax_5 == 0)
        data_4b19c8
        sub_41925c(ecx_1, ebx_1)
    
    if (eax_5 != 0 || ebx_1 == &data_41780c)
        fsbase->NtTib.ExceptionList = ExceptionList
        int32_t (__stdcall* var_c_1)(int32_t arg1) = sub_4196a0
        return sub_419308(data_4b19c8)
    
    ebx_1 = sub_403bf4(ebx_1)
