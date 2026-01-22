// 函数: sub_487888
// 地址: 0x487888
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* esi = *(arg1 + 0x18)

if (esi != 0)
    int32_t edx_2
    arg1, edx_2 = (**esi)()
    bool cond:0_1 = edx_2 == 0
    
    if (edx_2 == 0)
        cond:0_1 = arg1 == 0
    
    if (not(cond:0_1))
        return 0

arg1.b = 1
return arg1
