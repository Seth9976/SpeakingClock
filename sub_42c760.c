// 函数: sub_42c760
// 地址: 0x42c760
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* const ebx = arg1
HDC hdc = *(ebx + 4)

if (hdc == 0)
    return 

arg1.b = 0xf1 & *(ebx + 8)

if (*(ebx + 8) == arg1.b)
    return 

SelectObject(hdc, data_4b1a54)
SelectObject(*(ebx + 4), data_4b1a58)
SelectObject(*(ebx + 4), data_4b1a5c)
arg1.b = 0xf1 & *(ebx + 8)
*(ebx + 8) = arg1.b
