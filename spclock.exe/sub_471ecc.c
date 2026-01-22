// 函数: sub_471ecc
// 地址: 0x471ecc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

HWND result = (*(*arg1 - 0x10))()

if (*(arg1 + 0x277) == 1)
    int32_t eax_2
    eax_2.b = sub_45f888(arg1) == *(arg2 + 8)
    char ebx_1 = eax_2.b
    int32_t edx_2
    result, edx_2 = sub_4711d0(arg1, ebx_1)
    
    if (ebx_1 != 0)
        result = *(data_4b1ce0 + 0x44)
        
        if ((result->__offset(0x54).b & 4) != 0)
            edx_2.b = 1
            int32_t* esi
            esi.w = 0xffd0
            return sub_403e64(*(data_4b1ce0 + 0x44), esi, edx_2)

return result
