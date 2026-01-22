// 函数: sub_455c82
// 地址: 0x455c82
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

TEB* fsbase
fsbase->NtTib.ExceptionList = __return_addr
char result = 0
data_4b1c64 = 0

if (data_4b1c94 != 0)
    if (sub_403df4(data_4b1c94, 0x451764) != 0)
        result = sub_403c68(data_4b1c94)
    else if (sub_403df4(data_4b1c94, data_4aa794) != 0)
        result = sub_403c68(data_4b1c94)
    else
        result = sub_403df4(data_4b1c94, 0x4518bc)
        
        if (result != 0)
            result = sub_403c68(data_4b1c94)

data_4b1c84 = 0
*arg1
return result
