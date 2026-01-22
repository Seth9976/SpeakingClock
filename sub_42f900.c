// 函数: sub_42f900
// 地址: 0x42f900
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_8 = ecx

if (arg1 == 0)
    return 

int32_t* eax_1 = sub_41a4bc(data_4aaf00)
int32_t __saved_ebp
int32_t* var_14 = &__saved_ebp
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t i = eax_1[2] - 1

if (i s>= 0)
    do
        int32_t* eax_3 = sub_41a0f4(eax_1, i)
        void* edx_2 = eax_3[0x16]
        
        if (edx_2 != 0 && *(*(edx_2 + 0x28) + 8) == arg1)
            sub_42f9e4(eax_3)
        
        i -= 1
    while (i != 0xffffffff)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t var_14_1 = 0x42f977
sub_41a520(data_4aaf00)
