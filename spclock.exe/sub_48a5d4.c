// 函数: sub_48a5d4
// 地址: 0x48a5d4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int16_t* eax_2
void* ecx
eax_2, ecx = sub_41a0f4(*(arg3 + 0x78), arg4)
char eax_4 = *(arg3 + 0x7d)
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList
void var_34
void var_24

if (eax_4 == 0 || *(arg3 + 0x7c) == 1)
    if (eax_4 == 0)
        sub_406ce8(*(arg3 + 0x5c), 0, sx.d(*eax_2), &var_24, *(arg3 + 0x54))
        void* var_40_10 = &var_24
        int32_t eax_70 = *(arg3 + 0x54)
        ExceptionList = &var_34
        sub_406ce8(*(arg3 + 0x5c), arg5, arg1, ExceptionList, eax_70)
        return sub_42c124(sub_430bec(*(arg3 + 0x70)), &var_34, arg2, var_40_10)
    
    sub_406ce8(*(arg3 + 0x5c), 0, sx.d(*eax_2), &var_24, *(arg3 + 0x54))
    void* var_40_8 = &var_24
    int32_t eax_58 = *(arg3 + 0x54)
    ExceptionList = &var_34
    sub_406ce8(*(arg3 + 0x5c), arg5, arg1, ExceptionList, eax_58)
    return sub_42c124(sub_430bec(*(arg3 + 0x74)), &var_34, arg2, var_40_8)

char result = *(arg3 + 0x6c)
int32_t __saved_ebp
void* edx_1
TEB* fsbase

if (result u< 2)
    edx_1.b = 1
    int32_t* eax_6 = sub_430618(sub_42a104+0x140, edx_1)
    sub_430bec(eax_6)
    int32_t* var_40_1 = &__saved_ebp
    int32_t (* var_44_1)(void* arg1, void* arg2) = j_sub_40443c
    ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_406c1c(*(arg3 + 0x5c), 0, 0, &var_24, *(arg3 + 0x54))
    sub_48d9d4(eax_6, &var_24, *(arg3 + 0x64))
    char var_4c_1 = &__saved_ebp
    int32_t* eax_14
    void* ecx_3
    eax_14, ecx_3 = sub_430bec(eax_6)
    sub_48a494(eax_14, nullptr, ecx_3)
    
    if (*(arg3 + 0x6c) != 1)
        sub_489c6c(arg3, eax_6, 0)
    else
        sub_489c6c(arg3, eax_6, 1)
    
    sub_406c1c(*(arg3 + 0x5c), 0, 0, &var_24, *(arg3 + 0x54))
    sub_406ce8(*(arg3 + 0x5c), arg5, arg1, &var_34, *(arg3 + 0x54))
    sub_42c124(sub_430bec(eax_6), &var_34, arg2, &var_24)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t var_40_2 = 0x48a8c5
    return sub_403c68(eax_6)

if (result == 2)
    if (*(arg3 + 0x64) != 0x1fffffff)
        edx_1.b = 1
        int32_t* eax_32 = sub_430618(sub_42a104+0x140, edx_1)
        int32_t* var_40_4 = &__saved_ebp
        int32_t (* var_44_2)(void* arg1, void* arg2) = j_sub_40443c
        ExceptionList = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList
        sub_406c1c(*(arg3 + 0x5c), 0, 0, &var_24, *(arg3 + 0x54))
        sub_48d9d4(eax_32, &var_24, *(arg3 + 0x64))
        int32_t* var_4c_5 = &__saved_ebp
        int32_t* eax_39
        void* ecx_12
        eax_39, ecx_12 = sub_430bec(eax_32)
        sub_48a494(eax_39, nullptr, ecx_12)
        sub_406c1c(*(arg3 + 0x5c), 0, 0, &var_24, *(arg3 + 0x54))
        sub_406ce8(*(arg3 + 0x5c), arg5, arg1, &var_34, *(arg3 + 0x54))
        sub_42c124(sub_430bec(eax_32), &var_34, arg2, &var_24)
        fsbase->NtTib.ExceptionList = ExceptionList
        int32_t var_40_5 = 0x48a8c5
        return sub_403c68(eax_32)
    
    int32_t* var_40_3 = &__saved_ebp
    result = sub_48a494(arg2, nullptr, ecx)
else
    char temp2_1 = result - 2
    result -= 3
    
    if (temp2_1 == 1)
        int32_t* var_40_6 = &__saved_ebp
        result = sub_48a494(arg2, nullptr, ecx)

return result
