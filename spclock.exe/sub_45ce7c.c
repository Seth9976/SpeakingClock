// 函数: sub_45ce7c
// 地址: 0x45ce7c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (*(arg1 + 0x1b4) == 0)
    return sub_458e74(arg1, arg2)

if (*arg2 == 0x7b && *(arg1 + 0x30) != 0)
    arg2[1]
    sub_458ac8(*(arg1 + 0x30), arg2[2])
    arg2[3] = 0

uint32_t Msg = *arg2

if (Msg - 0x132 u< 7)
    LPARAM ebp_1 = arg2[2]
    arg2[3] = SendMessageA(ebp_1, Msg + 0xbc00, arg2[1], ebp_1)
else if (Msg - 0xbd32 u< 7)
    COLORREF color = sub_42ad8c(*(*(arg1 + 0x68) + 0x18))
    SetTextColor(arg2[1], color)
    COLORREF color_1 = sub_42ad8c(sub_42bba8(*(arg1 + 0x1a4)))
    SetBkColor(arg2[1], color_1)
    arg2[3] = sub_42bc04(*(arg1 + 0x1a4))
else if (Msg != data_4b1c60)
    arg2[3] = CallWindowProcA(*(arg1 + 0x1a8), *(arg1 + 0x1b4), Msg, arg2[1], arg2[2])
else
    arg2[3] = arg1

void* result = *arg2

if (result != 0xc)
    return result

return sub_45736c(arg2[1], result, arg1, arg2[2])
