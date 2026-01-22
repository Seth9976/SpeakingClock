// 函数: sub_41d914
// 地址: 0x41d914
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (data_4b19d0 == 0)
    return 

int32_t* eax_1 = sub_41a4bc(data_4b19d0)
int32_t __saved_ebp
int32_t* var_1c = &__saved_ebp
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t i = eax_1[2] - 1

if (i s>= 0)
    do
        int32_t* eax_3 = sub_41a0f4(eax_1, i)
        
        if (arg1 == 0 || eax_3[2] == arg1)
            char eax_6
            
            if (arg2 != 0)
                eax_6 = sub_408f64(arg2, eax_3[4])
            
            if (arg2 == 0 || eax_6 != 0)
                sub_419fe8(eax_1, i)
                sub_403c68(eax_3)
        
        i -= 1
    while (i != 0xffffffff)

fsbase->NtTib.ExceptionList = ExceptionList
void* const var_1c_1 = &data_41d9b6
sub_41a520(data_4b19d0)
