// 函数: sub_49011c
// 地址: 0x49011c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

TEXTMETRICA lptm
GetTextMetricsA(sub_42c73c(arg1), &lptm)
BOOL result
result.b = (lptm.tmPitchAndFamily & 4) != 0
return result
