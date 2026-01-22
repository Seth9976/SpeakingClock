// 函数: sub_404720
// 地址: 0x404720
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

TEB* fsbase
fsbase->NtTib.ExceptionList = arg1 - 0xc
*(arg1 - 0xc) = fsbase->NtTib.ExceptionList
*(arg1 - 8) = 0x404680
*(arg1 - 4) = arg1
data_4af7c8 = arg1 - 0xc
return arg1 - 0xc
