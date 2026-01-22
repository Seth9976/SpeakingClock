// 函数: sub_47582c
// 地址: 0x47582c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (*(arg1 + 0x30) == 0 || *(arg1 + 0x94) s<= 0)
    return 

*(arg1 + 0x94) -= 1

if (*(arg1 + 0x94) != 0)
    return 

int32_t i = *(*(arg1 + 0x90) + 8) - 1

if (i s>= 0)
    do
        SetWindowPos(sub_41a0f4(*(arg1 + 0x90), i), 0xffffffff, 0, 0, 0, 0, 0x213)
        i -= 1
    while (i != 0xffffffff)

(*(**(arg1 + 0x90) + 8))()
