// 函数: sub_48435c
// 地址: 0x48435c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

LRESULT ebx = arg1

if (arg2 s< 0)
    return 

arg1 = SendMessageA(sub_45f888(*(ebx + 0x18)), 0xbb, arg2, 0)
LRESULT var_18 = arg1

if (arg1 == 0xffffffff)
    return 

int32_t var_14 = SendMessageA(sub_45f888(*(ebx + 0x18)), 0xc1, var_18, 0) + var_18
SendMessageA(sub_45f888(*(ebx + 0x18)), 0x437, 0, &var_18)
LPARAM lParam = sub_405018(arg3)
SendMessageA(sub_45f888(*(ebx + 0x18)), 0xc2, 0, lParam)
