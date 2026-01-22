// 函数: sub_43b677
// 地址: 0x43b677
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg2 += 1
*arg3 += arg3.b
*0xa += arg1
*arg3 += arg3.b
void* entry_ebx
*(entry_ebx + 0x56) += arg2.b
LRESULT wParam = SendMessageA(sub_45f888(*(arg3 + 0x18)), 0xbb, arg2, 0)

if (wParam s< 0)
    return wParam

LRESULT lParam = SendMessageA(sub_45f888(*(arg3 + 0x18)), 0xbb, arg2 + 1, 0)

if (lParam s< 0)
    lParam = SendMessageA(sub_45f888(*(arg3 + 0x18)), 0xc1, wParam, 0) + wParam

SendMessageA(sub_45f888(*(arg3 + 0x18)), 0xb1, wParam, lParam)
return SendMessageA(sub_45f888(*(arg3 + 0x18)), 0xc2, 0, data_4aafc8)
