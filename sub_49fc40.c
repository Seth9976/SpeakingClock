// 函数: sub_49fc40
// 地址: 0x49fc40
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

BOOL result = IsWindowVisible(*(*data_4ac2fc + 0x30))

if (result != 0)
    return result

return ShowWindow(*(*data_4ac2fc + 0x30), SW_SHOW)
