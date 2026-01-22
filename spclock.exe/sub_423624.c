// 函数: sub_423624
// 地址: 0x423624
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* result = *(arg1 + 0x14)

if (result != 0)
    sub_41a290(result)
    result = *(arg1 + 0x14)
    
    if (result[2] == 0)
        sub_403c68(result)
        result = nullptr
        *(arg1 + 0x14) = 0

return result
