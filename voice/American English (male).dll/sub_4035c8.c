// 函数: sub_4035c8
// 地址: 0x4035c8
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

TEB* fsbase
fsbase->NtTib.ExceptionList = arg1 - 0xc
*(arg1 - 0xc) = fsbase->NtTib.ExceptionList
*(arg1 - 8) = 0x403528
*(arg1 - 4) = arg1
data_414634 = arg1 - 0xc
return arg1 - 0xc
