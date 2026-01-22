// 函数: sub_45c698
// 地址: 0x45c698
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char var_11 = arg1
int32_t result = 0
int32_t __saved_ebp

if (arg4 != 0 && *(arg2 + 0x1d0) != 0)
    int32_t i = *(*(arg2 + 0x1d0) + 8) - 1
    
    if (i s>= 0)
        do
            if (arg3 != 0)
                sub_41a0f4(*(arg2 + 0x1d0), i)
                result = sub_45c698(1, 1)
            
            if (result == 0)
                int32_t* var_28_1 = &__saved_ebp
                int32_t* eax_4
                void* edx_3
                eax_4, edx_3 = sub_41a0f4(*(arg2 + 0x1d0), i)
                
                if (sub_45c5cc(eax_4, edx_3) != 0)
                    break
            
            i -= 1
        while (i != 0xffffffff)

void* eax_6 = *(arg2 + 0x1cc)

if (eax_6 != 0 && result == 0)
    int32_t i_1 = *(eax_6 + 8) - 1
    
    if (i_1 s>= 0)
        do
            int32_t* var_28_2 = &__saved_ebp
            int32_t* eax_8
            void* edx_5
            eax_8, edx_5 = sub_41a0f4(*(arg2 + 0x1cc), i_1)
            
            if (sub_45c5cc(eax_8, edx_5) != 0)
                break
            
            i_1 -= 1
        while (i_1 != 0xffffffff)

return result
