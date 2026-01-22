// 函数: sub_408b74
// 地址: 0x408b74
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

uint16_t edx_1 = (arg3 u>> 0x10).w
uint16_t temp1 = modu.dp.w(edx_1:(arg3.w), arg2)
arg3.w = divu.dp.w(edx_1:(arg3.w), arg2)
*arg1 = arg3.w
*arg4 = temp1
return arg3
