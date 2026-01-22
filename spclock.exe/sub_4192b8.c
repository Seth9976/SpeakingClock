// 函数: sub_4192b8
// 地址: 0x4192b8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp = arg2
int32_t ebx_1 = *(*(arg1 + 4) + 8) - 1

if (ebx_1 s>= 0)
    int32_t i_1 = ebx_1 + 1
    int32_t esi_1 = 0
    int32_t i
    
    do
        int32_t result = sub_41a150(*(sub_41a0f4(*(arg1 + 4), esi_1) + 0xc), ebp)
        
        if (result s>= 0)
            return result
        
        esi_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

arg2.b = 1
int32_t* eax_4 = sub_418c54(&data_418b14, arg2, ebp)
return sub_419f9c(*(arg1 + 4), eax_4)
