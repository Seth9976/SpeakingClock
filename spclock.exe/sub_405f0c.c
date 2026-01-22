// 函数: sub_405f0c
// 地址: 0x405f0c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (*(arg1 + 0x10) == 0)
    uint8_t filename[0x108]
    GetModuleFileNameA(*(arg1 + 4), &filename, 0x105)
    int32_t edx_1
    edx_1.b = 1
    enum WIN32_ERROR eax_2 = sub_406170(&filename)
    *(arg1 + 0x10) = eax_2
    
    if (eax_2 == NO_ERROR)
        *(arg1 + 0x10) = *(arg1 + 4)

return *(arg1 + 0x10)
