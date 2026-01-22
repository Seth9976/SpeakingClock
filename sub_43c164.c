// 函数: sub_43c164
// 地址: 0x43c164
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

WPARAM wParam = arg2
int32_t* ebx = arg1

if (wParam s< 0)
    wParam = 0

if (wParam == ebx[0x95])
    return 

ebx[0x95] = wParam

if (sub_45fc28(ebx).b != 0)
    SendMessageA(sub_45f888(ebx), 0x141, wParam, 0)
