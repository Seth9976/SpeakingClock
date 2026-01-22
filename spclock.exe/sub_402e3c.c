// 函数: sub_402e3c
// 地址: 0x402e3c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (data_4af7c0 != 0)
    DestroyWindow(data_4af7c0)
    data_4af7c0 = 0

int32_t esi
int32_t edi

if (data_4ad5b0 != 0)
    sub_4027c8(esi, edi)

if (data_4af7b8 != 0)
    VirtualFree(data_4af7b8, 0, MEM_RELEASE)
    data_4af7b8 = 0

return sub_402dac()
