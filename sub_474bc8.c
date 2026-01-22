// 函数: sub_474bc8
// 地址: 0x474bc8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t result
result.b = 1
int32_t i = sub_474144(*(arg1 - 0x10)) - 1

if (i s>= 0)
    do
        void* eax_5 = sub_474130(*(arg1 - 0x10), i)
        
        if (*(eax_5 + 0x30) == 0 && (*(eax_5 + 0x1c) & 0x10) == 0 && *(eax_5 + 0x5b) != 0
                && *(eax_5 + 0x57) != 0 && *(eax_5 + 0x273) != 1)
            return result
        
        i -= 1
    while (i != 0xffffffff)

return 0
