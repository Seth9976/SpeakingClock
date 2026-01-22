// 函数: sub_46316c
// 地址: 0x46316c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t edx
int32_t var_c = edx
int32_t result
int32_t __saved_ebp
void* ecx

if (*(*(arg1 + 0x14) + 0x5b) - 1 u>= 2)
    int32_t* var_14_4 = &__saved_ebp
    sub_462ff4(arg2[2] - *(arg1 + 0x18) + 1, arg2[1] + 1, ecx)
    
    if (sub_465ac4(sub_4659bc()) == 0)
        int32_t eax_19 = arg2[1]
        sub_463088(*arg2 + 2, eax_19 + 3, arg2[2] - *(arg1 + 0x18) - 2, eax_19 + 5, &__saved_ebp)
        int32_t eax_22 = arg2[1]
        result = sub_463088(*arg2 + 2, eax_22 + 6, arg2[2] - *(arg1 + 0x18) - 2, eax_22 + 8, 
            &__saved_ebp)
    else
        int32_t eax_18 = arg2[1]
        int32_t edx_27 = eax_18 + 0xa
        int32_t ecx_16 = eax_18 + 1
        eax_18.b = 2
        result = sub_463110(ecx_16, *arg2 + 2, eax_18, edx_27, arg2[2] - *(arg1 + 0x18) - 2, 
            &__saved_ebp)
else
    int32_t* var_14 = &__saved_ebp
    sub_462ff4(*arg2 + 1, arg2[1] + 1, ecx)
    
    if (sub_465ac4(sub_4659bc()) == 0)
        int32_t eax_9 = *arg2
        sub_463088(eax_9 + 3, arg2[1] + *(arg1 + 0x18) + 1, eax_9 + 5, arg2[3] - 2, &__saved_ebp)
        int32_t eax_11 = *arg2
        result = sub_463088(eax_11 + 6, arg2[1] + *(arg1 + 0x18) + 1, eax_11 + 8, arg2[3] - 2, 
            &__saved_ebp)
    else
        int32_t eax_8 = *arg2
        int32_t edx_4 = eax_8 + 0xa
        int32_t edx_9 = eax_8 + 1
        eax_8.b = 3
        result =
            sub_463110(arg2[1] + *(arg1 + 0x18) + 1, edx_9, eax_8, arg2[3] - 2, edx_4, &__saved_ebp)
return result
