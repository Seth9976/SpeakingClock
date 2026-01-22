// 函数: sub_479df8
// 地址: 0x479df8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_14 = arg3
int32_t ebp = arg2
int32_t i = *(*(arg1 + 4) + 8) - 1

if (i s>= 0)
    do
        int32_t* eax_2
        eax_2, arg2 = sub_41a0f4(*(arg1 + 4), i)
        
        if (ebp == eax_2[0xd] && eax_2[0xc] == arg3)
            return eax_2
        
        i -= 1
    while (i != 0xffffffff)

arg2.b = 1
int32_t* ebx_1 = sub_479c58(ebp, arg2, &data_479b30, arg3)
sub_419f9c(*(arg1 + 4), ebx_1)
return ebx_1
