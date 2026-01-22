// 函数: sub_4a023c
// 地址: 0x4a023c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* result = sub_4a0228()

if (*(arg1 + 0x40) != 0)
    sub_407b88(data_4b1dd0)
    *(arg1 + 0x40) = 0
    result = nullptr
    data_4b1dd0 = 0

if (*(arg1 + 0x44) != 0)
    result = arg1 + 0x44
    sub_406550(result)

if (data_4b1dbc != 0)
    result = &data_4b1dbc
    sub_406550(&data_4b1dbc)

return result
