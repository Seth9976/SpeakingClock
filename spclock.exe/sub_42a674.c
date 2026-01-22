// 函数: sub_42a674
// 地址: 0x42a674
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg2 == 0)
    return 

sub_42a578(arg1)
int32_t __saved_ebp
int32_t* var_1c = &__saved_ebp
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
arg2[1] -= 1

if (arg2[1] == 0)
    int32_t* eax_5 = *(arg1 + 4)
    
    if (eax_5 != arg2)
        while (true)
            int32_t* edx_1 = *eax_5
            
            if (edx_1 == arg2)
                break
            
            eax_5 = edx_1
        
        *eax_5 = *arg2
    else
        *(arg1 + 4) = *arg2

fsbase->NtTib.ExceptionList = ExceptionList
int32_t var_1c_1 = 0x42a703
sub_42a584(arg1)
