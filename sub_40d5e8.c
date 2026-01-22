// 函数: sub_40d5e8
// 地址: 0x40d5e8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (data_4af920 != 0)
    *(data_4af920 + 0xc) = 1
    (*(*data_4af920 - 8))()
    data_4af920 = 0

if (data_4af924 != 0)
    *(data_4af924 + 0xc) = 1
    sub_403c68(data_4af924)
    data_4af924 = 0

*data_4abfdc = 0
*data_4ac13c = 0
*data_4ac074 = 0
*data_4ac114 = 0
*data_4ac144 = 0
*data_4ac2ec = 0
int32_t result = sub_402f2c()

if (result != 0)
    result = sub_403df4(sub_402f2c(), 0x408038)
    
    if (result.b == 0)
        int32_t var_4 = sub_402f4c()
        sub_402f2c()
        sub_40d554()
        noreturn

return result
