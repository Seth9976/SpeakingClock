// 函数: sub_477268
// 地址: 0x477268
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int16_t var_a = arg2
int32_t result = 0
*arg4 = 1
int32_t* esi = nullptr
int32_t* eax_2 = *(data_4b1ce4 + 0x64)

if (eax_2 != 0)
    esi = sub_46bf14(eax_2)
    
    if (esi != 0 && *(esi + 0x2f2) != 0)
        esi[0xbd]
        result = esi[0xbc](arg4)

if (result.b == 0)
    void* eax_8 = *(data_4b1ce4 + 0x68)
    
    if (eax_8 != 0 && esi != eax_8 && eax_8 != 0 && *(eax_8 + 0x2f2) != 0)
        *(eax_8 + 0x2f4)
        result = (*(eax_8 + 0x2f0))(arg4)
    
    if (result.b == 0 && *(arg3 + 0x11a) != 0)
        *(arg3 + 0x11c)
        return (*(arg3 + 0x118))(arg4)

return result
