// 函数: sub_4615e0
// 地址: 0x4615e0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_8 = arg1
sub_418a64(arg2, 0, 0, arg4, 0)
enum DRAW_TEXT_FORMAT format = sub_45a1d8(arg3) | 0xc10
uint8_t* lpchText = sub_405018(arg1)
int32_t result = DrawTextA(sub_42c73c(*(arg3 + 0x250)), lpchText, 0xffffffff, arg4, format)
arg4[2] += 6
arg4[3] += 2
return result
