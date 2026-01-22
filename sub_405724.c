// 函数: sub_405724
// 地址: 0x405724
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg3 == 0)
    return 

int32_t* var_4_1 = arg1
int32_t* ebx_1 = arg1
int32_t i_5 = arg3
arg1.b = *arg2
int32_t edx
edx.b = arg2[1]
int32_t ebp

switch (arg1.b)
    case 0xa
        if (arg3 s> 1)
            sub_404bac(ebx_1, arg3)
        else
            sub_404b88(ebx_1)
    case 0xb
        if (arg3 s> 1)
            sub_405380(ebx_1, arg3)
        else
            sub_405368(ebx_1)
    case 0xc
        int32_t i_1
        
        do
            ebx_1 = &ebx_1[4]
            sub_40570c()
            i_1 = i_5
            i_5 -= 1
        while (i_1 s> 1)
    case 0xd
        int32_t var_14_1 = ebp
        int32_t i_2
        
        do
            ebx_1 += *(arg2 + edx + 2)
            *(arg2 + edx + 6)
            **(arg2 + edx + 0xa)
            sub_405724()
            i_2 = i_5
            i_5 -= 1
        while (i_2 s> 1)
    case 0xe
        int32_t var_14_2 = ebp
        int32_t i_3
        
        do
            int32_t* eax_4 = ebx_1
            ebx_1 += *(arg2 + edx + 2)
            sub_4056d8(eax_4, arg2)
            i_3 = i_5
            i_5 -= 1
        while (i_3 s> 1)
    case 0xf
        int32_t i_4
        
        do
            int32_t* eax_5 = ebx_1
            ebx_1 = &ebx_1[1]
            sub_406550(eax_5)
            i_4 = i_5
            i_5 -= 1
        while (i_4 s> 1)
    default
        if (arg1.b != 0x11)
            int32_t* eax_7
            eax_7.b = 2
            noreturn sub_402ff8(eax_7) __tailcall
        
        int32_t i
        
        do
            int32_t* eax_6 = ebx_1
            ebx_1 = &ebx_1[1]
            sub_405e78(eax_6, arg2)
            i = i_5
            i_5 -= 1
        while (i s> 1)
