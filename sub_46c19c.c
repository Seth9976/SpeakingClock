// 函数: sub_46c19c
// 地址: 0x46c19c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* ebx = *(arg1 + 4)

if (ebx[0x96].b == 0)
    return arg1

if ((*(*ebx + 0xd8))() == 0)
    return sub_46c8d8(arg1, 0)

int32_t var_10_1 = 0
int32_t ebx_2 = sub_45b7f4(*(arg1 + 4)) - 1

if (ebx_2 s>= 0)
    int32_t i_1 = ebx_2 + 1
    int32_t esi_1 = 0
    int32_t i
    
    do
        int32_t __saved_ebp
        
        if (*(arg1 + 0x18) != 0)
            int32_t* var_1c_2 = &__saved_ebp
            uint32_t eax_12
            uint32_t edx_5
            eax_12, edx_5 = sub_45b7b8(*(arg1 + 4), esi_1)
            sub_46c130(eax_12, edx_5)
        else
            int32_t* var_1c_1 = &__saved_ebp
            uint32_t eax_9
            uint32_t edx_3
            eax_9, edx_3 = sub_45b7b8(*(arg1 + 4), esi_1)
            sub_46c0c0(eax_9, edx_3)
        esi_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

return sub_46c8d8(arg1, zx.d(*(arg1 + 0x1a)))
