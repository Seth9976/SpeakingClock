// 函数: sub_49b690
// 地址: 0x49b690
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t esi
esi.w = 0xffb3

if (sub_403e64(arg1, esi) != 0)
    if (arg1[0xaa] != 0)
        esi.w = 0xffaf
        sub_403e64(arg1, esi)
else if (*(arg1 + 0x262) != 0 || arg1[0xaa] != 0)
    esi.w = 0xffaf
    sub_403e64(arg1, esi)

return sub_49a3f4(arg1)
