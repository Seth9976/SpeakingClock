// 函数: sub_4194c0
// 地址: 0x4194c0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_c = 0
sub_419250(data_4b19c8)
int32_t __saved_ebp
int32_t* var_1c = &__saved_ebp
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx_1 = *(*(arg1 + 4) + 8) - 1

if (ebx_1 s>= 0)
    int32_t i_1 = ebx_1 + 1
    int32_t esi_1 = 0
    int32_t i
    
    do
        void* result = sub_418cf0(sub_41a0f4(*(arg1 + 4), esi_1), arg2)
        
        if (result != 0)
            sub_4045c8(ExceptionList, var_20)
            return result
        
        esi_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t var_1c_1 = 0x41953e
return sub_419308(data_4b19c8)
