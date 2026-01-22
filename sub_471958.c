// 函数: sub_471958
// 地址: 0x471958
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (*(arg2 + 4) == 2 && *(arg1 + 0x8f) == 1 && (arg1[7].b & 0x10) == 0
        && sub_46b8c0(sub_45f888(arg1)) == 0)
    SetWindowPos(sub_45f888(arg1), nullptr, 0, 0, 0, 0, 0x7)
    BOOL result = PostMessageA(sub_45f888(arg1), 0xa2, *(arg2 + 4), *(arg2 + 8))
    
    if (*(arg1 + 0x276) == 0)
        return result
    
    return sub_457f4c(arg1, (*(*arg1 + 0x54))() ^ 1, 0xffffffff)

return sub_459494(arg1)
