// 函数: sub_4231f2
// 地址: 0x4231f2
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

BOOL result = 0
TEB* fsbase
fsbase->NtTib.ExceptionList = __return_addr

if (*(arg1 - 5) == 0)
    result = CloseHandle(*(arg1[-3] + 8))

if (*(arg1 - 5) == 0)
    result = arg1[-1]
    
    if (*(result + 0x10) != 0)
        result = sub_40451c(*(arg1[-1] + 0x10))

*arg1
return result
