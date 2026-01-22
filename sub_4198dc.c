// 函数: sub_4198dc
// 地址: 0x4198dc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_8 = ecx
int32_t var_8_1 = 0
int32_t* eax_1 = sub_41a4bc(data_4b19c4)
int32_t __saved_ebp
int32_t* var_18 = &__saved_ebp
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t i = eax_1[2] - 1

if (i s>= 0)
    do
        void* eax_3 = sub_41a0f4(eax_1, i)
        
        if (arg1 == *(eax_3 + 4))
            int32_t result = *(eax_3 + 0xc)
            sub_4045c8(ExceptionList, var_1c)
            return result
        
        i -= 1
    while (i != 0xffffffff)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t var_18_1 = 0x41994d
return sub_41a520(data_4b19c4)
