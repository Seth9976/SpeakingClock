// 函数: sub_49e0ac
// 地址: 0x49e0ac
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (*(arg1 + 0xc) == 0)
    return 0

if (*(arg1 + 8) != 0)
    sub_49e0f8(arg1, 1)

uint32_t result
result.b = SetTimer(*(data_4abe24 + 0xc), *(arg1 + 4), *(arg1 + 0xc), nullptr) != 0

if (result.b != 0)
    *(arg1 + 8) = 1
    void* edx_1 = data_4abe24
    *(edx_1 + 8) += 1

return result
