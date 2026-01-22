// 函数: sub_41d9c0
// 地址: 0x41d9c0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_8 = ecx

if (data_4b19d0 == 0)
    return 

int32_t* eax_1 = sub_41a4bc(data_4b19d0)
int32_t __saved_ebp
int32_t* var_18 = &__saved_ebp
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t i = eax_1[2] - 1

if (i s>= 0)
    do
        int32_t* eax_3 = sub_41a0f4(eax_1, i)
        
        if (eax_3[1] == arg1)
            sub_419fe8(eax_1, i)
            sub_403c68(eax_3)
        
        i -= 1
    while (i != 0xffffffff)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t var_18_1 = 0x41da3e
sub_41a520(data_4b19d0)
