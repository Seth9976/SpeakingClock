// 函数: sub_464c24
// 地址: 0x464c24
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t entry_ebx
int32_t var_4 = entry_ebx
BOOL result = (*data_4ac140)(0x4b)
*(arg1 + 0x20) = (sbb.d(entry_ebx, entry_ebx, result u< 1)).b + 1

if ((sbb.d(entry_ebx, entry_ebx, result u< 1)).b == 0xff)
    return result

return SystemParametersInfoA(SPI_GETWHEELSCROLLLINES, 0, arg1 + 0x10, 0)
