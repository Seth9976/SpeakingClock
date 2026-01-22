// 函数: sub_484308
// 地址: 0x484308
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* var_100c = arg1
var_100c.w = 0x1000
int32_t* lParam = &var_100c
LRESULT eax_2 = SendMessageA(sub_45f888(*(arg1 + 0x18)), 0xc4, arg2, lParam)

if (*(&lParam:2 + eax_2) == 0xd && *(&lParam:3 + eax_2) == 0xa)
    eax_2 -= 2

sub_404c78(arg3, &var_100c, eax_2)
return arg3
