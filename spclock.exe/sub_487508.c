// 函数: sub_487508
// 地址: 0x487508
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t esi

if (arg2 u< 1)
    if (arg3 != *(arg1 + 0x32))
        *(arg1 + 0x32) = arg3
        esi.w = 0xfffc
        sub_403e64(arg1, esi)
else if (arg2 != 1)
    esi.w = 0xfffc
    sub_403e64(arg1, esi)
else if (arg3 != arg1[0xd].w)
    arg1[0xd].w = arg3
    esi.w = 0xfffc
    sub_403e64(arg1, esi)
