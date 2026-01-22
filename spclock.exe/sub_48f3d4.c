// 函数: sub_48f3d4
// 地址: 0x48f3d4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_42b2b0(*(*(arg4 - 0x24) + 0xc), arg3)

if (*(arg4 - 0x25) u>= 2)
    *(arg4 - 0x10) += arg1
    *(arg4 - 0xc) += arg2
    uint32_t c = sub_404e48(*(arg4 - 0x2c))
    uint8_t* lpString = sub_490140(*(arg4 - 0x2c))
    return ExtTextOutA(sub_42c73c(*(arg4 - 0x24)), *(arg4 - 0x10), *(arg4 - 0xc), 0, arg4 - 0x20, 
        lpString, c, nullptr)

sub_406cd0(arg4 - 0x10, arg1, arg2)
enum DRAW_TEXT_FORMAT format = *(arg4 + 0x10)
int32_t cchText = sub_404e48(*(arg4 - 0x2c))
uint8_t* lpchText = sub_490140(*(arg4 - 0x2c))
return DrawTextExA(sub_42c73c(*(arg4 - 0x24)), lpchText, cchText, arg4 - 0x10, format, nullptr)
